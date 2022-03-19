#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
/*
typedef char* String;

void subMethod(String &p) {
	int count = 100;
	p = (char *)malloc(count);
	fgets(p, count, stdin);
}

int main() {
	String pointer;
	subMethod(pointer);
	printf("%s", pointer);

	system("pause");
	return 0;
}*/

void subMethod(char*& p) {
	int count = 100;
	p = (char*)malloc(count);
	fgets(p, count, stdin);
}

int main() {
	char* pointer;
	subMethod(pointer);
	printf("%s", pointer);

	system("pause");
	return 0;
}