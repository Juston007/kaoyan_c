#include "stdio.h"
#include "stdlib.h"

//递归 函数自己调用自己
//要有结束条件

//阶乘
//n! = 1 * 2 * ... * n - 1 * n = n*(n-1)
int factorial(int n) {
	//return (n == 1) ? (1) : (n * factorial(n - 1));
	if (n == 1)
		return 1;
	return n * factorial(n - 1);
}

//共n个台阶，一次只能上1个台阶或者2个台阶
//请问走到第n个台阶有几种走法？
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