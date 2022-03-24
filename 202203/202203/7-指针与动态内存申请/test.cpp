#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
栈空间：由编译器在需要的时候分配。
函数的形参和函数内的局部变量分布在栈空间，函数运行结束后，出栈（被释放）

堆空间：由程序员手动分配释放的储存区。如果程序员不释放，将会一直运行直到结束
*/
int main() {
	//数组在定义时大小就已经固定，存放在栈空间中，随着main函数执行结束自动释放
	int array[5] = { 1,2,3,4,5 };

	int length;
	scanf("%d", &length);
	//与栈空间不同，堆空间申请之后会一直存在直到程序结束
	//void* malloc(int byteSize)
	char* pointer = (char *)malloc(length * sizeof(char));

	strcpy(pointer,"hello world!");
	puts(pointer);

	//当不再需要申请的堆空间时，需要手动释放
	//void free(void *pointer)
	free(pointer);

	//指向一个已经被释放区域的指针，称为野指针。
	//错误的使用野指针可能会导致程序出现异常，数据被破坏
	//所以在释放堆空间后，要手动把指针设置为NULL
	pointer = NULL;

	system("pause");
	return 0;
}