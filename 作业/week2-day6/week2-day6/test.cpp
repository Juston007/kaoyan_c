#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int isSymmetry(int number) {
	int temp = 0;
	int oldNumber = number;
	//求与number顺序相反的数
	while (number) {
		temp = (temp * 10) + (number % 10);
		number /= 10;
	}
	return temp == oldNumber;
}

int main() {
	int number;
	scanf("%d", &number);
	printf("%s", isSymmetry(number) ? "yes" : "no");
	//system("pause");
	return 0;
}