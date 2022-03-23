#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int array[5] = { 2,7,8 };
	int* pointer = array, j;

	//*和++优先级相同，先将*pointer赋值给j，然后pointer++
	j = *pointer++;
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	//括号优先级最高，先pointer++，然后j = *pointer
	j = *(pointer++);
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	//括号优先级最高，先*pointer取值，然后 j = 值++
	j = (*pointer)++;
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	//此时pointer指向数组第二个元素7
	//pointer【0】先执行，相当于取值，赋值给j，然后++
	j = pointer[0]++;
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	system("pause");
	return 0;
}