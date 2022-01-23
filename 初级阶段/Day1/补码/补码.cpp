#include "stdio.h"
#include "stdlib.h"

//整型如何在计算机中表示
//计算机用二进制来表示所有的数据
//int 4byte short 2byte long 8byte
//用补码来表示一个整性的
int main() {
	short i, j, k;
	i = 2;
	j = -5;
	k = i + j;
	printf("k = %d\n",k);
	system("pause");
}