#define _CRT_SECURE_NO_WARNNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	//指针：内存地址，并且含有变量的数据类型信息，可以推断出要读取的长度
	//指针的使用场景：传递和偏移

	//直接访问：按变量名，访问存取变量
	//间接访问：按变量的地址，访问存取变量
	//		  通常将变量地址存放到另一个变量中，称为指针变量

	//基类型 *指针变量名;
	//int *p; 说明该指针变量所存储的地址指向的内存单元存储的是int类型数据
	int a = 1234, * pointer = NULL;
	printf("a=%d,pointer=%#x\n", a, pointer);

	//&取地址运算符 获取变量的地址
	pointer = &a;
	printf("a=%d,pointer=%#x\n", a, pointer);

	//*间接引用运算符 将99赋值给指针所指向的内存单元
	*pointer = 5678;
	printf("a=%d,pointer=%#x\n", a, pointer);

	system("pause");
	return 0;
}
