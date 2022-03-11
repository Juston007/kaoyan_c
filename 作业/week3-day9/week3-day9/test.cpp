#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
	char oldString[100];
	char newString[100];
	gets_s(oldString);

	int length = strlen(oldString);
	for (int i = 0; i < length; i++) {
		newString[length - i - 1] = oldString[i];
	}
	newString[length] = '\0';

	int result = strcmp(oldString, newString);
	if (result < 0)
	{
		printf("%d\n", -1);
	}
	else if (result > 0)
	{
		printf("%d\n", 1);
	}
	else {
		printf("%d\n", 0);
	}

	system("pause");
	return 0;
}