#include "stdio.h"
#include "stdlib.h"

//ȫ�ֱ������ⲿ������
//�����򣺴Ӷ��������λ�õ�Դ�ļ�������Ҳ��ȫ�̱���
int globalVariable;

//��ʽ����Ҳ�Ǿֲ�����
void fun(int a) {
	//�ֲ�����1���ڲ�������
	//�����򣺾����ڶ��������λ�õ�ͬһ��ε���������Ч
	int localVariable1;
}

int main() {
	//�ֲ�����2���ڲ�������
	//�ֲ�����������ȫ�ֱ�����������ͬ
	//�ֲ�����Ҳ���ԺͲ�ͬ��εľֲ�������������ͬ����ͬ��β�������
	//��������Ļ�����ô��ѡ����������ģ�Ҳ���Ǵ��ڵ�������ƥ���
	int localVariable2 = 2;

	for (int localVariable2 = 1;localVariable2--;) {
		printf("localVariable2 = %d\n", localVariable2);
	}
	printf("localVariable2 = %d\n", localVariable2);

	system("pause");
	return 0;
}