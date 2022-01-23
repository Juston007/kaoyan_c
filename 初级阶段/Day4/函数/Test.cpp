#include "stdio.h"
#include "stdlib.h"
#include "another.h"

//先对各个cpp文件分别编译
//编译时通过头文件了解函数的声明
//链接时才将各个cpp文件编译生成的.obj文件合成为一个目标文件
//装入是将目标文件装入内存

//如果使用了一个函数，头文件可以找到声明，但是在其他obj文件找不到定义
//这就是一个链接（LINK）错误
int main() {

	printf("hello main\n");

	fun1("Test.cpp main");
	fun2("Test.cpp main", 10, 25);

	system("pause");
	return 0;
}