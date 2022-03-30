#define _CRT_SECURE_NO_WARNINGS
#define hh
#include "stdio.h"
#include "stdlib.h"

//��n��̨�ף�һ��ֻ����1��̨�׻���2��̨��
//�����ߵ���n��̨���м����߷���
//�߽���ڣ�a1=1,a2=2
//�ݹ鷽�̣�an=a(n-2)+a(n-1)
int fun1(int n) {
	if (n <= 2) {
		return n;
	}
	return fun1(n - 1) + fun1(n - 2);
}

//�׳� n! = 1*2*...*n-1*n
//�߽�������a0=1,a1=1		n<=1
//�ݹ鷽�̣�an=a(n-1)*n	n>=3
int fun2(int n) {
	if (n <= 1) {
		return 1;
	}
	else {
		return fun2(n - 1) * n;
	}
}

//쳲���������
//�߽�������a1=1,a2=1			n<=2
//�ݹ鷽�̣�an=a(n-2)+a(n-1)	n>=3
int fun3(int n) {
	//�߽�����
	if (n <= 2) {
		return 1;
	}
	//�ݹ鷽��
	else {
		int v1 = fun3(n - 2);
		int v2 = fun3(n - 1);
		return v1 + v2;
	}
}

int main() {
	int a;
	scanf("%d", &a);
	printf("fun1(%d) = %d\n", a, fun1(a));
	printf("fun2(%d) = %d\n", a, fun2(a));
	printf("fun3(%d) = %d\n", a, fun3(a));

	system("pause");
	return 0;
}