#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int test(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}else {
		return test(n - 2) + test(n - 1);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d",test(n));

	system("pause");
	return 0;
}