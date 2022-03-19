#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

typedef struct Student {
	int stuID;
	char stuName[20];
	char stuGender;
} Student;

int main() {
	Student stu;
	scanf("%d %s %c", &stu.stuID, stu.stuName, &stu.stuGender);
	printf("%d %s %c", stu.stuID, stu.stuName, stu.stuGender);
	system("pause");
	return 0;
}