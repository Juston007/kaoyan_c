#define _CRT_SECURE_WARNNINGS
#include "stdio.h"
#include "stdlib.h"

int main() {
	//数据类型 变量名[数组长度]
	//分配连续的10个sizeof(类型)的内存空间
	//逻辑上相邻的元素，在物理上也相邻，可以随机存储（存取时间跟元素的位置无关）
	int array[10] = { 0,1,2,3,4,5,6,7,8,9 };

	//数组中所有的元素数据类型都是相同的，且大小无法改变
	//修改元素：数组名[下标] 下标范围【0，length-1】
	array[0] = -1;

	//访问元素：数组名[下标]
	int a = array[3];
	printf("array[3] = %d\n", a);

	//数组名相当于存储着数组首个元素地址的指针，不过是无法修改的
	//array = NULL; 表达式必须是可修改的左值
	printf("%0xp\n", array);
	printf("array[3] = %d\n", *(array + 3));

	system("pause");
	return 0;
}