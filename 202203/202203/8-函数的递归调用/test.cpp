#define _CRT_SECURE_NO_WARNINGS
#define hh
#include "stdio.h"
#include "stdlib.h"

//��n��̨�ף�һ��ֻ����1��̨�׻���2��̨��
//�����ߵ���n��̨���м����߷���
int fun1() {
	return 0;
}

//�׳�
int fun2() {
	return 0;
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
	//1 1 2 3 5 8 
	int a;
	scanf("%d", &a);
	printf("fun3(%d) = %d\n", a, fun3(a));

	system("pause");
	return 0;
}