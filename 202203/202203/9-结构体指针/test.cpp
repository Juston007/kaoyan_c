#define _CRT_SECURE_NO_WARNING
#include "stdlib.h"
#include "stdio.h"

struct Student {
	int stuID;
	char name[20];
};

int main() {
	//struct �ṹ������ �ṹ�����
	struct Student stu = { 2019101784,"Juston" };
	struct Student* pointer = &stu;

	//ָ��ĳ�Ա����ѡ��
	//pointer->stuID �ȼ��� (*pointer).stuID
	printf("pointer->stuID = %d\n", pointer->stuID);
	printf("pointer->name = %s\n", pointer->name);

	printf("stu.stuID = %d\n", stu.stuID);
	printf("stu.name = %s\n", stu.name);

	system("pause");
	return 0;
}