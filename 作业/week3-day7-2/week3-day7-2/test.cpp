#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	//某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。
	//要求换正好40张,且每种票子至少一张。问：有几种换法？

	int counter = 0;

	for (int i = 1;i <= 10; i++) {
		for (int j = 1;j <= 20; j++) {
			for (int k = 1;k <= 40 - i - j; k++) {
				for (int t = 1; t <= 40 - i - j - k; t++) {
					int value = i * 10 + j * 5 + k * 2 + t * 1;
					int number = i + j + k + t;
					if (value == 100 && number == 40) {
						counter++;
					}
				}
			}
		}
	}

	printf("%d", counter);

	system("pause");
	return 0;
}