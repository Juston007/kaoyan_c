#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

//指针偏移就是对指针进行加减操作，说白了就是找该地址所指向内存单元附近的存储单元
//对指针进行乘法操作是没有意义的

//指针偏移时地址的偏移数，以类型所占的字节数为基本单位进行偏移
//int类型的指针变量p，p+1 相当于 p+4byte

int main() {
	//数组名相当于不可修改的指针，存储着数组首个元素的地址
	//数组名包含数组长度信息，但是指针不包含
	int array[5] = { 1,2,3,4,5 };
	int* pointer = array;

	//访问指针所指向的内存单元，读取多少字节取决于基类型
	printf("*pointer=%d sizeof(*pointer)=%d\n", *pointer, sizeof(*pointer));

	//计算数组所包含的元素个数
	int length = sizeof(array) / sizeof(int);
	for (int i = 0;i < length;i++) {
		//pointer+1 并不等于 地址+1
		//而是 地址+sizeof(基类型)
		//如int *p; p+1 等于 地址+4byte
		printf("array[%d]=%d\n", i, *(pointer + i));
	}

	system("pause");
	return 0;
}