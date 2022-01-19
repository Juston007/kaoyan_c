#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

struct Student {
	int stuID;
	char name[20];
};

int main() {

	struct Student stu = { 2019101784,"Juston" };
	struct Student* pointer = &stu;

	//指针的成员变量选择
	//(*pointer).stuID 等价于 pointer->stuID
	printf("stu = %d name = %s\n", (*pointer).stuID, (*pointer).name);
	printf("stu = %d name = %s\n", pointer->stuID, pointer->name);

	printf("------------------------------\n");

	struct Student students[3];
	students[0] = { 1001,"Panda" };
	students[1] = { 2001,"Jason" };
	students[2] = { 3001,"Yellow" };

	pointer = students;

	int stuID;

	//stuID = pointer->stuID; pointer->stuID++;
	stuID = pointer->stuID++;
	printf("stuID = %d,pointer->stuID = %d\n", stuID, pointer->stuID);
	
	//stuID = pointer->stuID; pointer++;
	stuID = pointer++->stuID;
	printf("stuID = %d,pointer->stuID = %d\n", stuID, pointer->stuID);

	system("pause");
	return 0;
}