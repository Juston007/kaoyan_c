#include "stdio.h"
#include "stdlib.h"

void change(char string[6]) {
	puts(string);
}

int main() {
	//不可以对常量区数据进行修改
	const char* string1 = "hello";
	const char* string4 = "hello";
	char string2[] = "world";
	char* string3 = string2;

	*string2 = 'W';

	puts(string1);
	puts(string2);
	change(string2);

	system("pause");
	return 0;
}