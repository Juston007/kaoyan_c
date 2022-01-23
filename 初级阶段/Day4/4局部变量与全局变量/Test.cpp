#include "stdio.h"
#include "stdlib.h"

//全局变量（外部变量）
//作用域：从定义变量的位置到源文件结束，也称全程变量
int globalVariable;

//形式参数也是局部变量
void fun(int a) {
	//局部变量1（内部变量）
	//作用域：局限在定义变量的位置到同一层次的右括号有效
	int localVariable1;
}

int main() {
	//局部变量2（内部变量）
	//局部变量可以与全局变量的名称相同
	//局部变量也可以和不同层次的局部变量的名称相同，相同层次不能重名
	//如果重名的话，那么就选择层次上最近的，也就是从内到外最先匹配的
	int localVariable2 = 2;

	for (int localVariable2 = 1;localVariable2--;) {
		printf("localVariable2 = %d\n", localVariable2);
	}
	printf("localVariable2 = %d\n", localVariable2);

	system("pause");
	return 0;
}