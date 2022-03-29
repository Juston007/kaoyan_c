#define _CRT_SECURE_NO_WARNINGS
#define hh
#include "stdio.h"
#include "stdlib.h"

//共n个台阶，一次只能上1个台阶或者2个台阶
//请问走到第n个台阶有几种走法？
int fun1() {
	return 0;
}

//阶乘
int fun2() {
	return 0;
}

//斐波那契数列
//边界条件：a1=1,a2=1			n<=2
//递归方程：an=a(n-2)+a(n-1)	n>=3
int fun3(int n) {
	//边界条件
	if (n <= 2) {
		return 1;
	}
	//递归方程
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