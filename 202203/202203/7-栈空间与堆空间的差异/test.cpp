#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char* print_stack() {
	//�Ӻ����ڲ������ַ����飬����ջ�ռ䣬���������Զ��ͷ�
	char stack[20] = "hello stack!";
	printf("at print_stack %s\n", stack);
	return stack;
}

char* print_heap() {
	//�Ӻ����ڲ���̬�����ڴ棬���ڶѿռ䣬ֱ������������ֶ��ͷ�
	char *heap = (char *)malloc(20 * sizeof(char));
	strcpy(heap,"hello heap!");
	printf("at print_heap %s\n", heap);
	return heap;
}

int main() {
	char* stack_pointer, * heap_pointer;

	stack_pointer = print_stack();
	//ִ�е��˲�ʱ��print_stack�����ڲ��ľֲ������Ѿ����ͷ�
	printf("at main %s\n", stack_pointer);

	heap_pointer = print_heap();
	//ִ�е��˲�ʱ��print_stack�����ڲ�����Ķѿռ���Ȼ���ڣ����Լ���ʹ��
	printf("at main %s\n", heap_pointer);

	system("pause");
	return 0;
}