#define _CRT_SECURE_NO_WARNING
#include "stdlib.h"
#include "stdio.h"

//全局变量 存储在数据区 自动释放
//从定义变量到整个源文件结束有效，也称全程变量
int global = 123;

//形式参数也是局部变量
void fun(int a) {
	//局部变量 定义域
	//局部变量是从定义到同一层次的右括号有效 
	int local1 = 234;
	printf("at fun local1 %d\n", local1);

	int global = 9;
	printf("at fun global %d\n", global);
}

int main() {
	//局部变量
	//存储在栈中 函数执行完毕结束自动释放
	int local2 = 345;
	printf("at main local2 %d\n", local2);

	//局部变量可以与全局变量名称相同（要求是不同层次）
	//优先匹配最近层次的
	int global = 567;
	printf("at main global %d\n", global);

	{
		int global = 784;
		printf("at block global %d\n", global);
	}

	fun(0);

	system("pause");
	return 0;
}