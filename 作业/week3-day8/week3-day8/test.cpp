#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int n, counter, array[100];

	counter = 0;
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		scanf("%d", &array[i]);
	}

	for (int i = 0;i < n;i++) {
		if (array[i] == 2) {
			counter++;
		}
	}

	printf("%d", counter);

	system("pause");
	return 0;
}