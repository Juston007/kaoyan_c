#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "string.h"
#include "stdlib.h"

//�����ڶ���ʱ��С���Ѿ�ȷ���ˣ������ջ�ռ���
//���ʹ�õĿռ䲻ȷ������ô��Ҫʹ�öѿռ�

//void ʲô������Ҫ����
//void* ������ָ��
int main() {

	char* string;
	int length;

	scanf("%d",&length);
	//void* malloc(int byteSize)
	//��ջ�ռ������ʱ���ѿռ�����������֮����Ҫ�ͷ�
	string = (char *)malloc(length * sizeof(char));

	strcpy(string,"malloc success");
	puts(string);

	//void free(void *pointer)
	//�ͷſռ䣬ʵ�ε�ֵҲ�����׵�ַ�����malloc���ص�ֵһ��
	free(string);

	//ʹ�����ͷ�֮���ָ�룬��ΪҰָ��
	//*string = 0xaa;
	//Ӧ�ý��ͷ�֮���ָ�룬����ΪNULL
	string = NULL;

	system("pause");
	return 0;
}