#define _CRT_SECURE_WARNNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	//�������� ������[���鳤��]
	//����������10��sizeof(����)���ڴ�ռ�
	//�߼������ڵ�Ԫ�أ���������Ҳ���ڣ���������洢����ȡʱ���Ԫ�ص�λ���޹أ�
	int array[10] = { 0,1,2,3,4,5,6,7,8,9 };

	//���������е�Ԫ���������Ͷ�����ͬ�ģ��Ҵ�С�޷��ı�
	//�޸�Ԫ�أ�������[�±�] �±귶Χ��0��length-1��
	array[0] = -1;

	//����Ԫ�أ�������[�±�]
	int a = array[3];
	printf("array[3] = %d\n", a);

	//�������൱�ڴ洢�������׸�Ԫ�ص�ַ��ָ�룬�������޷��޸ĵ�
	//array = NULL; ���ʽ�����ǿ��޸ĵ���ֵ
	printf("%0xp\n", array);
	printf("array[3] = %d\n", *(array + 3));

	system("pause");
	return 0;
}