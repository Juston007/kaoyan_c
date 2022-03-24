#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char* print_stack() {
	//从函数内部定义字符数组，属于栈空间，函数结束自动释放
	char stack[20] = "hello stack!";
	printf("at print_stack %s\n", stack);
	return stack;
}

char* print_heap() {
	//从函数内部动态申请内存，属于堆空间，直到程序结束或手动释放
	char *heap = (char *)malloc(20 * sizeof(char));
	strcpy(heap,"hello heap!");
	printf("at print_heap %s\n", heap);
	return heap;
}

int main() {
	char* stack_pointer, * heap_pointer;

	stack_pointer = print_stack();
	//执行到此步时，print_stack函数内部的局部变量已经被释放
	printf("at main %s\n", stack_pointer);

	heap_pointer = print_heap();
	//执行到此步时，print_stack函数内部申请的堆空间依然存在，可以继续使用
	printf("at main %s\n", heap_pointer);

	system("pause");
	return 0;
}