#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

//ֵ���ݣ�ֻ�ǰ�ʵ�ʲ�����ֵ���Ƹ���ʽ�����������ǲ�ͬ�ı���
void change1(int a) {
	a++;
	printf("at change1 a = %d\n", a);
}

//ַ���ݣ��������ĵ�ַ���ݸ���ʽ��������ʽ����ͨ����ַ����ͬһ������
//��Ҳ����ΪʲôscanfҪ��ȡ��ַ��
void change2(int *a) {
	(*a)++;
	printf("at change2 a = %d\n", *a);
}

int main() {
	//ָ������洢����ĳ�������ĵ�ַ
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