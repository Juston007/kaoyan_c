#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

void method(char *str) {
	printf("at method length of string = %d\n", sizeof(str));
}

int main() {
	//�������εı�����ֵ����
	//��ʹ��ַ���ݣ�Ҳֻ�ǰѵ�ַ���Ƶ��β�
	char string[20] = "hello world!";

	//���鴫��ʱ������Ϊָ��ģ������޷�֪��������Ϣ
	printf("at main length of string = %d\n", sizeof(string));
	method(string);

	system("pause");
	return 0;
}