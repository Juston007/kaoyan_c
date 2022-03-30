#define _CRT_SECURE_NO_WARNING
#include "stdlib.h"
#include "stdio.h"

struct Student {
	int stuID;
	char name[20];
};

int main() {
	//struct 结构体名称 结构体变量
	struct Student stu = { 2019101784,"Juston" };
	struct Student* pointer = &stu;

	//指针的成员变量选择
	//pointer->stuID 等价于 (*pointer).stuID
	printf("pointer->stuID = %d\n", pointer->stuID);
	printf("pointer->name = %s\n", pointer->name);

	printf("stu.stuID = %d\n", stu.stuID);
	printf("stu.name = %s\n", stu.name);

	system("pause");
	return 0;
}