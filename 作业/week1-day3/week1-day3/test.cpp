#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int input;
	char ch;
	scanf("%d", &input);
	//正数97在内存当中是61 00 00 00
	//转换为字符类型后是61 00 00 00 对应着字符a的ASCII码
	printf("%c", input);
	//system("pause");
	return 0;
}