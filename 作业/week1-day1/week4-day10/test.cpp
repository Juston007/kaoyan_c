#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

void change(int i) {
	printf("%d", i / 2);
}

int main() {
	int i;
	scanf("%d", &i);
	change(i);
	system("pause");
	return 0;
}