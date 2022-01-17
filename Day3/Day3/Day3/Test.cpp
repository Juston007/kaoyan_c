#include "stdio.h"
#include "stdlib.h"

//指针变量存储的是地址
//用到地址的场景是传递与偏移

void change(int *value) {
	*value = 5;
}

int main() {
	int i = 10;

	printf("before change i = %d\n", i);

	change(&i);

	printf("after change i = %d\n", i);

	system("pause");
	return 0;
}