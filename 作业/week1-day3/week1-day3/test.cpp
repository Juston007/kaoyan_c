#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int input;
	char ch;
	scanf("%d", &input);
	//����97���ڴ浱����61 00 00 00
	//ת��Ϊ�ַ����ͺ���61 00 00 00 ��Ӧ���ַ�a��ASCII��
	printf("%c", input);
	//system("pause");
	return 0;
}