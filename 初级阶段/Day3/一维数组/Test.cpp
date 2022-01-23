#include "stdio.h"
#include "stdlib.h"

//函数名作为实参传递给子函数时，是弱化为指针的
void change(char *pointer) {
	*pointer = 'H';
	*(pointer + 1) = 'E';
	pointer[2] = 'L';
}

int main() {
	//函数调用的本质是值传递
	//数组传递时是弱化为指针的，所以子函数无法知道数组的长度

	char array[10] = "hello";
	change(array);
	puts(array);

	system("pause");
	return 0;
}