#define _CRT_SECURE_NO_WARNING
#include "stdlib.h"
#include "stdio.h"

//ȫ�ֱ��� �洢�������� �Զ��ͷ�
//�Ӷ������������Դ�ļ�������Ч��Ҳ��ȫ�̱���
int global = 123;

//��ʽ����Ҳ�Ǿֲ�����
void fun(int a) {
	//�ֲ����� ������
	//�ֲ������ǴӶ��嵽ͬһ��ε���������Ч 
	int local1 = 234;
	printf("at fun local1 %d\n", local1);

	int global = 9;
	printf("at fun global %d\n", global);
}

int main() {
	//�ֲ�����
	//�洢��ջ�� ����ִ����Ͻ����Զ��ͷ�
	int local2 = 345;
	printf("at main local2 %d\n", local2);

	//�ֲ�����������ȫ�ֱ���������ͬ��Ҫ���ǲ�ͬ��Σ�
	//����ƥ�������ε�
	int global = 567;
	printf("at main global %d\n", global);

	{
		int global = 784;
		printf("at block global %d\n", global);
	}

	fun(0);

	system("pause");
	return 0;
}