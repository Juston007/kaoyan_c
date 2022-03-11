#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main() {
	int year;
	scanf("%d", &year);

	//可以被4整除，但是不能被100整除。或者可以被400整除
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		printf("yes");
	}
	else {
		printf("no");
	}
	return 0;
}