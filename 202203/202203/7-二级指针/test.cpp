#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/*
当使用引用参数时，参数的地址(而不是值)会自动传递给函数
在函数中，对引用参数的操作会自动解引用
引用参数是通过在函数声明中的参数名前面加上&来声明的
对引用参数执行的操作影响用于调用函数的实参，而不是引用参数本身。
*/
void change1(int &num) {
	num = 1;
}

/*
二级指针，传递的是指针
与引用参数不同，需要手动解引用
*/
void change2(int **num) {
	**num = 2;
}

int main() {
	int num = 1234;
	int* pointer = &num;

	printf("before change1 number = %d\n", num);
	change1(num);
	printf("after change1 number = %d\n", num);

	printf("before change2 number = %d\n", num);
	change2(&pointer);
	printf("after change2 number = %d\n", num);

	system("pause");
	return 0;
}