#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

/*
��ʹ�����ò���ʱ�������ĵ�ַ(������ֵ)���Զ����ݸ�����
�ں����У������ò����Ĳ������Զ�������
���ò�����ͨ���ں��������еĲ�����ǰ�����&��������
�����ò���ִ�еĲ���Ӱ�����ڵ��ú�����ʵ�Σ����������ò�������
*/
void change1(int &num) {
	num = 1;
}

/*
����ָ�룬���ݵ���ָ��
�����ò�����ͬ����Ҫ�ֶ�������
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