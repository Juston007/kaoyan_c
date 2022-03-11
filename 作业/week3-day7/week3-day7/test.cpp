#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int n, accumulate = 1;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++) {
		accumulate *= i;
	}
	printf("%d", accumulate);
	system("pause");
	return 0;
}