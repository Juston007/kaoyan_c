#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	int i;
	char c;
	float f;

	int ret;

	/*
	读取1001 m 98.5 会发生错误
	1001可以匹配%d，%c匹配了空格，然后m不是float类型 停止匹配 成功个数为2
	ret = scanf("%d%c%f", &i, &c, &f);
	*/

	//混合输入时，如果要读取char类型，在前面加上空格
	ret = scanf("%d %c%f", &i, &c, &f);

	printf("d=%d,c=%c,f=%f", i, c, f);

	system("pause");
	return 0;
}