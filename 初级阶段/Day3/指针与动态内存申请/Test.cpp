#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

//数组在定义时大小就已经确定了，存放在栈空间中
//如果使用的空间不确定，那么就要使用堆空间

//void 什么都不需要返回
//void* 无类型指针
int main() {

	char* string;
	int length;

	scanf("%d",&length);
	//void* malloc(int byteSize)
	//与栈空间的区别时，堆空间申请用完了之后需要释放
	string = (char *)malloc(length * sizeof(char));

	strcpy(string,"malloc success");
	puts(string);

	//void free(void *pointer)
	//释放空间，实参的值也就是首地址必须和malloc返回的值一样
	free(string);

	//使用了释放之后的指针，称为野指针
	//*string = 0xaa;
	//应该将释放之后的指针，设置为NULL
	string = NULL;

	system("pause");
	return 0;
}