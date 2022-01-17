#include "stdio.h"
#include "stdlib.h"

//指针的偏移，也就是对指针进行加减操作
//对指针进行乘法和除法是没有意义的

int main() {
	//数组名无法赋值，不可改变
	//array 类型是数组，存储着数组的起始地址
	int array[5] = { 15,25,36,40,51 };
	int* pointer;

	pointer = array;

	//对一个指针变量进行取值，得到的类型是其基类型
	//取多少字节取决于指针的基类型

	//对int*指针变量进行取值，得到的类型是int类型
	//对int*指针变量进行取值，取sizeof(int)个字节
	printf("*pointer = %d\n", *pointer);

	//尝试访问地址为0xcccccccc的内存单元
	//但无访问权限，引发读取访问权限冲突
	//pointer = (int*)0xcccccccc;
	//printf("*pointer = %d\n", *pointer);


	//计算数组的大小（字节），然后计算数组第一个元素的大小（字节）
	//相除得到数组的长度(元素个数)
	int length = sizeof(array) / sizeof(array + 0);
	for (int i = 0;i < length;i++) {
		//指针+1并不是地址+1
		//而是地址加上指针的基类型的字节数
		//如果是int*指针，那么pointer+1 等于 地址加上4byte
		printf("array[%d] = %d\n",i,*(pointer + i));
	}


	system("pause");
	return 0;
}