#include "stdio.h"
#include "stdlib.h"

//��������Ϊʵ�δ��ݸ��Ӻ���ʱ��������Ϊָ���
void change(char *pointer) {
	*pointer = 'H';
	*(pointer + 1) = 'E';
	pointer[2] = 'L';
}

int main() {
	//�������õı�����ֵ����
	//���鴫��ʱ������Ϊָ��ģ������Ӻ����޷�֪������ĳ���

	char array[10] = "hello";
	change(array);
	puts(array);

	system("pause");
	return 0;
}