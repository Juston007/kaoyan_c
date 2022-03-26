#define _CRT_SECURE_NO_WARNINGS
#include "Another.h"
#include "stdio.h"
#include "stdlib.h"

//编译时 先对各个cpp文件分别编译，通过头文件了解函数的声明
//链接时 才将各个cpp生成的obj文件合成为一个目标文件
//装入   将目标文件装入内存

//使用一个函数，头文件可以找到声明，但是目标文件找不到定义，是链接（LINK）错误
int main() {
	int arg1, arg2;
	char str1[100];

	scanf("%d%d", &arg1, &arg2);
	scanf("%s",str1);

	printf("call fun1 result = %d\n", fun1(arg1, arg2));
	printf("call fun2 result = %s\n", fun2(str1, "end"));

	system("pause");
	return 0;
}