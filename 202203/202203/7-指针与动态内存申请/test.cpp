#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/*
ջ�ռ䣺�ɱ���������Ҫ��ʱ����䡣
�������βκͺ����ڵľֲ������ֲ���ջ�ռ䣬�������н����󣬳�ջ�����ͷţ�

�ѿռ䣺�ɳ���Ա�ֶ������ͷŵĴ��������������Ա���ͷţ�����һֱ����ֱ������
*/
int main() {
	//�����ڶ���ʱ��С���Ѿ��̶��������ջ�ռ��У�����main����ִ�н����Զ��ͷ�
	int array[5] = { 1,2,3,4,5 };

	int length;
	scanf("%d", &length);
	//��ջ�ռ䲻ͬ���ѿռ�����֮���һֱ����ֱ���������
	//void* malloc(int byteSize)
	char* pointer = (char *)malloc(length * sizeof(char));

	strcpy(pointer,"hello world!");
	puts(pointer);

	//��������Ҫ����Ķѿռ�ʱ����Ҫ�ֶ��ͷ�
	//void free(void *pointer)
	free(pointer);

	//ָ��һ���Ѿ����ͷ������ָ�룬��ΪҰָ�롣
	//�����ʹ��Ұָ����ܻᵼ�³�������쳣�����ݱ��ƻ�
	//�������ͷŶѿռ��Ҫ�ֶ���ָ������ΪNULL
	pointer = NULL;

	system("pause");
	return 0;
}