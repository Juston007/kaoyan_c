#include "stdio.h"
#include "stdlib.h"
#include "another.h"

//�ȶԸ���cpp�ļ��ֱ����
//����ʱͨ��ͷ�ļ��˽⺯��������
//����ʱ�Ž�����cpp�ļ��������ɵ�.obj�ļ��ϳ�Ϊһ��Ŀ���ļ�
//װ���ǽ�Ŀ���ļ�װ���ڴ�

//���ʹ����һ��������ͷ�ļ������ҵ�����������������obj�ļ��Ҳ�������
//�����һ�����ӣ�LINK������
int main() {

	printf("hello main\n");

	fun1("Test.cpp main");
	fun2("Test.cpp main", 10, 25);

	system("pause");
	return 0;
}