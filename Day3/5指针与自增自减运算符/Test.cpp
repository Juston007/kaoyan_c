#include "stdio.h"
#include "stdlib.h"

int main() {
	int array[5] = { 2,7,8 };
	int* pointer;
	int j;

	pointer = array;

	//1.
	//*和++的优先级相同
	//先把*pointer赋值给j，然后pointer++
	//j = *pointer++;

	//2.
	//括号的优先级最高，先执行*pointer然后赋值给j
	//然后对（*pointer）执行自加操作
	//j = (*pointer)++;

	//3.
	//括号的优先级最高，先执行（pointer++）
	//注意！虽然自增的优先级最高，但是因为是后加
	//所以表达式的值依然指向第一个内存单元，pointer指向第二个内存单元
	//然后对第一个内存单元取值
	//j = *(pointer++);

	//4.
	//上同
	j = *pointer++;
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);
	//此时pointer指向数组第二个元素7
	//pointer【0】先执行，相当于取7，赋值给j，然后++
	j = pointer[0]++;


	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	system("pause");
	return 0;
}