#define _CRT_SECURE_NO_WARNINGS
#include "Another.h"
#include "stdio.h"
#include "stdlib.h"

//����ʱ �ȶԸ���cpp�ļ��ֱ���룬ͨ��ͷ�ļ��˽⺯��������
//����ʱ �Ž�����cpp���ɵ�obj�ļ��ϳ�Ϊһ��Ŀ���ļ�
//װ��   ��Ŀ���ļ�װ���ڴ�

//ʹ��һ��������ͷ�ļ������ҵ�����������Ŀ���ļ��Ҳ������壬�����ӣ�LINK������
int main() {
	int arg1, arg2;
	char str1[100];

	scanf("%d%d", &arg1, &arg2);
	scanf("%s",str1);

	printf("call fun1 result = %d\n", fun1(arg1, arg2));
	printf("call fun2 result = %s\n", fun2(str1, "end"));

	system("pause");
	return 0;
}