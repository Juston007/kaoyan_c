#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int array[5] = { 2,7,8 };
	int* pointer = array, j;

	//*��++���ȼ���ͬ���Ƚ�*pointer��ֵ��j��Ȼ��pointer++
	j = *pointer++;
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	//�������ȼ���ߣ���pointer++��Ȼ��j = *pointer
	j = *(pointer++);
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	//�������ȼ���ߣ���*pointerȡֵ��Ȼ�� j = ֵ++
	j = (*pointer)++;
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	//��ʱpointerָ������ڶ���Ԫ��7
	//pointer��0����ִ�У��൱��ȡֵ����ֵ��j��Ȼ��++
	j = pointer[0]++;
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	system("pause");
	return 0;
}