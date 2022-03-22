#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

//值传递，只是把实际参数的值复制给形式参数，两个是不同的变量
void change1(int a) {
	a++;
	printf("at change1 a = %d\n", a);
}

//址传递，将变量的地址传递给形式参数，形式参数通过地址操作同一个变量
//这也就是为什么scanf要加取地址符
void change2(int *a) {
	(*a)++;
	printf("at change2 a = %d\n", *a);
}

int main() {
	//指针变量存储的是某个变量的地址
	int a = 100;
	int *pointer = &a;

	printf("at main before change1 a = %d\n", a);
	change1(a);
	printf("at main after change1 a = %d\n", a);

	printf("\n");

	printf("at main before change2 a = %d\n", a);
	change2(pointer);
	printf("at main after change2 a = %d\n", a);

	system("pause");
	return 0;
}