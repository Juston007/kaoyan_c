#define _CRT_SECURE_NO_WARNNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	//ָ�룺�ڴ��ַ�����Һ��б���������������Ϣ�������ƶϳ�Ҫ��ȡ�ĳ���
	//ָ���ʹ�ó��������ݺ�ƫ��

	//ֱ�ӷ��ʣ��������������ʴ�ȡ����
	//��ӷ��ʣ��������ĵ�ַ�����ʴ�ȡ����
	//		  ͨ����������ַ��ŵ���һ�������У���Ϊָ�����

	//������ *ָ�������;
	//int *p; ˵����ָ��������洢�ĵ�ַָ����ڴ浥Ԫ�洢����int��������
	int a = 1234, * pointer = NULL;
	printf("a=%d,pointer=%#x\n", a, pointer);

	//&ȡ��ַ����� ��ȡ�����ĵ�ַ
	pointer = &a;
	printf("a=%d,pointer=%#x\n", a, pointer);

	//*������������ ��99��ֵ��ָ����ָ����ڴ浥Ԫ
	*pointer = 5678;
	printf("a=%d,pointer=%#x\n", a, pointer);

	system("pause");
	return 0;
}
