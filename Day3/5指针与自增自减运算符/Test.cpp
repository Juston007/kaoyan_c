#include "stdio.h"
#include "stdlib.h"

int main() {
	int array[5] = { 2,7,8 };
	int* pointer;
	int j;

	pointer = array;

	//1.
	//*��++�����ȼ���ͬ
	//�Ȱ�*pointer��ֵ��j��Ȼ��pointer++
	//j = *pointer++;

	//2.
	//���ŵ����ȼ���ߣ���ִ��*pointerȻ��ֵ��j
	//Ȼ��ԣ�*pointer��ִ���ԼӲ���
	//j = (*pointer)++;

	//3.
	//���ŵ����ȼ���ߣ���ִ�У�pointer++��
	//ע�⣡��Ȼ���������ȼ���ߣ�������Ϊ�Ǻ��
	//���Ա��ʽ��ֵ��Ȼָ���һ���ڴ浥Ԫ��pointerָ��ڶ����ڴ浥Ԫ
	//Ȼ��Ե�һ���ڴ浥Ԫȡֵ
	//j = *(pointer++);

	//4.
	//��ͬ
	j = *pointer++;
	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);
	//��ʱpointerָ������ڶ���Ԫ��7
	//pointer��0����ִ�У��൱��ȡ7����ֵ��j��Ȼ��++
	j = pointer[0]++;


	printf("array[0] = %d,", array[0]);
	printf("j = %d,", j);
	printf("*pointer = %d\n", *pointer);

	system("pause");
	return 0;
}