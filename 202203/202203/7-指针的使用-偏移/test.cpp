#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

//ָ��ƫ�ƾ��Ƕ�ָ����мӼ�������˵���˾����Ҹõ�ַ��ָ���ڴ浥Ԫ�����Ĵ洢��Ԫ
//��ָ����г˷�������û�������

//ָ��ƫ��ʱ��ַ��ƫ��������������ռ���ֽ���Ϊ������λ����ƫ��
//int���͵�ָ�����p��p+1 �൱�� p+4byte

int main() {
	//�������൱�ڲ����޸ĵ�ָ�룬�洢�������׸�Ԫ�صĵ�ַ
	//�������������鳤����Ϣ������ָ�벻����
	int array[5] = { 1,2,3,4,5 };
	int* pointer = array;

	//����ָ����ָ����ڴ浥Ԫ����ȡ�����ֽ�ȡ���ڻ�����
	printf("*pointer=%d sizeof(*pointer)=%d\n", *pointer, sizeof(*pointer));

	//����������������Ԫ�ظ���
	int length = sizeof(array) / sizeof(int);
	for (int i = 0;i < length;i++) {
		//pointer+1 �������� ��ַ+1
		//���� ��ַ+sizeof(������)
		//��int *p; p+1 ���� ��ַ+4byte
		printf("array[%d]=%d\n", i, *(pointer + i));
	}

	system("pause");
	return 0;
}