#include "stdio.h"
#include "stdlib.h"

//ָ������洢���ǵ�ַ
//�õ���ַ�ĳ����Ǵ�����ƫ��

void change(int *value) {
	*value = 5;
}

int main() {
	int i = 10;

	printf("before change i = %d\n", i);

	change(&i);

	printf("after change i = %d\n", i);

	system("pause");
	return 0;
}