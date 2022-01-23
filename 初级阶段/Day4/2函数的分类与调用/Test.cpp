#include "stdio.h"
#include "stdlib.h"

//全局变量，存储在数据区
//函数定义的变量，作用域是整个c文件
int flag = 0;

void fun() {
	//flag = 1 换成 int flag = 1 后
	//从全局变量变成了局部变量
	//局部变量存储在栈
	flag = 1;
}

//标准函数、自定义函数
//有参函数
int main() {

	printf("before change flag = %d\n", flag);
	fun();
	printf("after change flag = %d\n", flag);

	system("pause");
	return 0;
}