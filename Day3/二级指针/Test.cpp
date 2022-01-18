#include "stdio.h"
#include "stdlib.h"

//二级指针的传递    C++的引用？

//如果函数的形参用了引用参数，那么就和在调用者的角度用这个变量一样
void change1(int &chang1_number) {
	int a = 8;
	chang1_number = 111;
}

void change2(int **chang2_number) {
	**chang2_number = 333;
	*chang2_number = 0x00;
}

int main() {
	int number = 999;
	int* pointer = &number;

	printf("before change1 number = %d\n", number);
	change1(number);
	printf("after change1 number = %d\n", number);

	printf("before change2 number = %d pointer = %x\n", number, pointer);
	change2(&pointer);
	printf("after change2 number = %d pointer = %x\n", number, pointer);

	system("pause");
	return 0;
}