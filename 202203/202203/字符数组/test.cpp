#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
	//��C�����У�û���ַ������ͣ�ֻ�����ַ��������洢�ַ���
	//�����·�һ����ʼ��ʱ�����Զ��ڽ�β׷��\0��Ϊ�ַ���������־
	char str1[12] = "hello";
	char str2[12] = "world";

	//��ʹ��printf��ӡ�ַ���ʱ����һֱ��ӡ������\0Ϊֹ
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	//�����ַ�������	������/0֮��ĳ���
	//int strlen(char *str)
	printf("length of str1 is %d\n", strlen(str1));

	//C����û���ò�����+���ַ����������Ӳ���
	//��Ҫʹ��char *strcat(char *str1,const char *str2)
	char* cat = strcat(str1, str2);
	printf("res = %s\n", cat);

	//�ַ������� ��source���Ƶ�destination��source�������ַ�������
	//strcpy(char *destination,const char *source)
	char* newStr = (char *)malloc(50);
	char* cpy = strcpy(newStr,"hello world!");
	printf("new string = %s\n", cpy);

	//�Ƚ��ַ����Ƿ����
	//strcmp(const char *str1,const char *str1)
	//str1=str2����0 str1>str2����1 str1<str2����-1
	//�ӿ�ʼ�Ƚ������ַ�����Ӧ���ַ���ASCIIֵ��ֱ���������߲���ȷ��رȽϽ��
	char cmp1[10] = "1237";
	char cmp2[10] = "12361345";

	printf("cmp1 cmpare cmp2 = %d\n", strcmp(cmp1, cmp2));

	system("pause");
	return 0;
}