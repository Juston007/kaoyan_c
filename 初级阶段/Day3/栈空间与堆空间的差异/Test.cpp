#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

//ջ�ռ�����ź�����ִ�н������ͷ�
char* print_stack() {
	char stack_string[20] = "I am stack";
	puts(stack_string);
	return stack_string;
}

//malloc����Ŀռ䣬�����ֶ��ͷţ�����ֱ����������������ͷ�
char* print_heap() {
	char* heap_string = (char *)malloc(20 * sizeof(char));
	strcpy(heap_string,"I am heap");
	puts(heap_string);
	return heap_string;
}

int main() {
	char* stack_pointer, * heap_pointer;

	stack_pointer = print_stack();
	puts(stack_pointer);

	heap_pointer = print_heap();
	puts(heap_pointer);

	system("pause");
	return 0;
}