#define _CRT_SECURE_NO_WARNING
#include "stdlib.h"
#include "stdio.h"

/*
struct 结构体名称 {
	类型 成员1;
	类型 成员2;
	...
	类型 成员n;
};
*/

//只需要63byte即可存储这个结构体，但是实际却用了68byte
//原因：32位系统中，总是以32位为一个单元存取数据
//字节对齐：为了更快的读取数据，不将新数据安排到前面未完的4byte，而是另起一行
struct Student {
	int stuID;				//4 byte		1行
	char name[20];			//20byte		5行
	char gender;			//1 byte		1行，空3byte，另起一行
	int age;				//4 byte		1行
	float score;			//4 byte		1行
	char address[30];		//30byte		8行，空2byte，另起一行
};

int main() {
	//struct 结构体名称 结构体变量
	struct Student stu;
	printf("sizeof(Student) = %d\n", sizeof(stu));

	//结构体变量赋初值
	struct Student stu1 = { 2019101784,"Juston",'M',20,390.0,"山东济南" };
	printf("stuID = %d\n", stu1.stuID);
	printf("name = %s\n", stu1.name);
	printf("sex = %c\n", stu1.gender);
	printf("age = %d\n", stu1.age);
	printf("score = %f\n", stu1.score);
	printf("address = %s\n", stu1.address);

	system("pause");
	return 0;
}