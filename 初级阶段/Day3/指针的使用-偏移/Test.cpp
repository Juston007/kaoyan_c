#include "stdio.h"
#include "stdlib.h"

//ָ���ƫ�ƣ�Ҳ���Ƕ�ָ����мӼ�����
//��ָ����г˷��ͳ�����û�������

int main() {
	//�������޷���ֵ�����ɸı�
	//array ���������飬�洢���������ʼ��ַ
	int array[5] = { 15,25,36,40,51 };
	int* pointer;

	pointer = array;

	//��һ��ָ���������ȡֵ���õ����������������
	//ȡ�����ֽ�ȡ����ָ��Ļ�����

	//��int*ָ���������ȡֵ���õ���������int����
	//��int*ָ���������ȡֵ��ȡsizeof(int)���ֽ�
	printf("*pointer = %d\n", *pointer);

	//���Է��ʵ�ַΪ0xcccccccc���ڴ浥Ԫ
	//���޷���Ȩ�ޣ�������ȡ����Ȩ�޳�ͻ
	//pointer = (int*)0xcccccccc;
	//printf("*pointer = %d\n", *pointer);


	//��������Ĵ�С���ֽڣ���Ȼ����������һ��Ԫ�صĴ�С���ֽڣ�
	//����õ�����ĳ���(Ԫ�ظ���)
	int length = sizeof(array) / sizeof(array + 0);
	for (int i = 0;i < length;i++) {
		//ָ��+1�����ǵ�ַ+1
		//���ǵ�ַ����ָ��Ļ����͵��ֽ���
		//�����int*ָ�룬��ôpointer+1 ���� ��ַ����4byte
		printf("array[%d] = %d\n",i,*(pointer + i));
	}


	system("pause");
	return 0;
}