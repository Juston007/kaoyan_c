#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int i;
	char c;
	float f;

	int ret;

	/*
	��ȡ1001 m 98.5 �ᷢ������
	1001����ƥ��%d��%cƥ���˿ո�Ȼ��m����float���� ֹͣƥ�� �ɹ�����Ϊ2
	ret = scanf("%d%c%f", &i, &c, &f);
	*/

	//�������ʱ�����Ҫ��ȡchar���ͣ���ǰ����Ͽո�
	ret = scanf("%d %c%f", &i, &c, &f);

	printf("d=%d,c=%c,f=%f", i, c, f);

	system("pause");
	return 0;
}