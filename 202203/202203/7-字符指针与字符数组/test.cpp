#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
	const char* str1 = "hello1";
	char str2[20] = "hello2";
	char* str3 = str2;

	//�������޸ĳ���
	//*str1 = 'a';

	//�����޸�
	*str2 = 'b';

	*(str3 + 1) = 'g';

	puts(str1);
	puts(str2);
	puts(str3);

	system("pause");
	return 0;
}