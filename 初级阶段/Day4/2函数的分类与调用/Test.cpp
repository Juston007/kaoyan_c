#include "stdio.h"
#include "stdlib.h"

//ȫ�ֱ������洢��������
//��������ı�����������������c�ļ�
int flag = 0;

void fun() {
	//flag = 1 ���� int flag = 1 ��
	//��ȫ�ֱ�������˾ֲ�����
	//�ֲ������洢��ջ
	flag = 1;
}

//��׼�������Զ��庯��
//�вκ���
int main() {

	printf("before change flag = %d\n", flag);
	fun();
	printf("after change flag = %d\n", flag);

	system("pause");
	return 0;
}