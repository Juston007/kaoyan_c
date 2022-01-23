#include "stdio.h"
#include "stdlib.h"

int main() {
	//    7f ff ff ff
	//补码 0111 1111 1111 1111 1111 1111 1111 1111
	int i = 2147483647;

	//    80 00 00 00
	//补码 1000 0000 0000 0000 0000 0000 0000 0000
	int j = i + 1;	   

	printf("i = %d\n", i);
	printf("j = %d\n", j);
	system("pause");
}