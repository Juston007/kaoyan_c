#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

void method(char *str) {
	printf("at method length of string = %d\n", sizeof(str));
}

int main() {
	//函数传参的本质是值传递
	//即使是址传递，也只是把地址复制到形参
	char string[20] = "hello world!";

	//数组传递时是弱化为指针的，所以无法知道长度信息
	printf("at main length of string = %d\n", sizeof(string));
	method(string);

	system("pause");
	return 0;
}