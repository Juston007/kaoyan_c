#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {

	//scanf����ֵΪ��ȡ�ɹ��ĸ��� ����ʱ����EOF(End Of File)
	//vs2019����������ctrl+z�ظ����Σ��ͻ����

	/*
	���������a����ô�����ӡ
	��Ϊ������aʱ�����������С�a\n��������Ҫ��ȡ����%d���޷�ƥ��
	���ﵽ���ֵ���ҵ���ƥ����ַ�ʱ���ַ��Ķ�ȡ��ֹͣ�����ȷ�����Ϊ׼��

	int i, ret;
	while ((ret = scanf("%d", &i)) != EOF) {
		printf("i = %d\n", i);
	}
	*/

	//vs2019ʹ��rewind(stdin)����ձ�׼���뻺����
	int i, ret;
	while (rewind(stdin), (ret = scanf("%d", &i)) != EOF) {
		printf("i = %d\n", i);
	}
	system("pause");
	return 0;
}