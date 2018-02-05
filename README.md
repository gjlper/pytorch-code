# pytorch-code
pytorch源码剖析


genericSwap：用内存交换实现泛型编程，可以交换多种类型的两个数；

genericType_V0和genericType_V1：用宏实现泛型，识别数据类型；

宏是pytorch中泛型实现的关键，自己对genericType_V0中的代码做了详细注释；这两个版本的代码参考博客是[点击这里](http://www.cnblogs.com/shepherd2015/p/7730277.html)

cython_test: cython写成的代码，能够被python调用。