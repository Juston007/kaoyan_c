#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	//ĳ���뽫���е�һ����ֵ100Ԫ������һ���10Ԫ��5Ԫ��2Ԫ��1Ԫ��ֵ��Ʊ�ӡ�
	//Ҫ������40��,��ÿ��Ʊ������һ�š��ʣ��м��ֻ�����

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