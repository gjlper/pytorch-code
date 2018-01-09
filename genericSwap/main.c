#include <string.h>
#include <stdio.h>
/************************************/

//思路:	各种类型的数据在底层存储上都是相同的，因此
//	直接交换数据的存储。


//启发：C语言给了用户程序员最大权限的操作内存的机会，
//	是实现泛型的一种思路。

/************************************/

void mySwap(void* a, void* b, int size){
	void* p = (void*)malloc(size);
	memcpy(p, a, size);
	memcpy(a, b, size);
	memcpy(b, p, size);
}

int main(){
	double a = 3, b = 4;
	mySwap(&a,&b, sizeof(b));
	printf("%f,%f\n",a,b);
	return 0;
}
