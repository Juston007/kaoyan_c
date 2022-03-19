#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {

	//scanf返回值为读取成功的个数 出错时返回EOF(End Of File)
	//vs2019在行首输入ctrl+z重复三次，就会出错

	/*
	如果输入了a，那么会疯狂打印
	因为当输入a时，缓冲区中有”a\n“，但是要读取的是%d，无法匹配
	当达到最大值或找到不匹配的字符时，字符的读取将停止，以先发生的为准。

	int i, ret;
	while ((ret = scanf("%d", &i)) != EOF) {
		printf("i = %d\n", i);
	}
	*/

	//vs2019使用rewind(stdin)，清空标准输入缓冲区
	int i, ret;
	while (rewind(stdin), (ret = scanf("%d", &i)) != EOF) {
		printf("i = %d\n", i);
	}
	system("pause");
	return 0;
}