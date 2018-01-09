#include <iostream>
#include "generic.h"

/********************************/

//input: x, y
//output: xy

/********************************/
#define CONCAT_2_EXPAND(x,y) x ## y


/********************************/

//use 'show_name' to alternate 'show_(name)'

//MACRO nest

/********************************/

#define show_(name) CONCAT_2_EXPAND(show_, name)


#define real int

/********************************/

//#line 1表示将该行的下一行设为该文件的第1行，也就是将第32行设为该文件的第1行 

// GENERIC_FILE展开为"generic.h"，相当于引入头文件，条件是real<-int

/********************************/
#line 1 GENERIC_FILE
#include GENERIC_FILE


/********************************/

//删除real宏，为real<-double做准备

/********************************/
#undef real

#define real double
#line 1 GENERIC_FILE
#include GENERIC_FILE

using namespace std;
int main(){
	show_int(6);
	show_double(3.14);
	return 0;
}
