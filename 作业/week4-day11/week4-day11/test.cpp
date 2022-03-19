#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int size;
	scanf("%d", &size);

	char* string = (char *)malloc(size);
	scanf("%c", string);
	fgets(string, size, stdin);
	printf("%s", string);

	system("pause");
	return 0;
}