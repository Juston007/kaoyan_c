#include "stdio.h"
#include "stdlib.h"

//�ݹ� �����Լ������Լ�
//Ҫ�н�������

//�׳�
//n! = 1 * 2 * ... * n - 1 * n = n*(n-1)
int factorial(int n) {
	//return (n == 1) ? (1) : (n * factorial(n - 1));
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

//��n��̨�ף�һ��ֻ����1��̨�׻���2��̨��
//�����ߵ���n��̨���м����߷���
int fun(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return fun(n - 1) + fun(n - 2);
	}
}

int main() {

	int n = 5;
	int result = factorial(n);
	printf("%d! = %d", n, result);

	system("pause");
	return 0;
}