#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

//声明一个结构体类型的一般形式
//只需要63byte就可以存储这个结构体，但是这个结构体实际上占了68字节

//原因：
//CPU总是以4byte也就是32bit（8bytes，64bit）存取指令和数据
//以多少byte存取指令和数据，取决于MDR和IR
//如果不对齐，可能一个int型数据需要存取两次
//对齐可以只需一次就能存取，但是会浪费空间
struct Student {	 //4byte （32bit）为一行
	int stuID;		 //4bytes		1行
	char name[20];	 //20bytes		5行
	char sex;		 //1byte		1行，为了对齐，该行空了3bytes
	int age;		 //4bytes		1行
	float score;	 //4bytes		1行
	char address[30];//30bytes		8行，为了对齐，最后一行空了2bytes
};//结构体类型声明的最后一定要加分号

int main() {
	//先生明结构体类型，再定义变量名
	//初始化
	struct Student stu1 = { 2019101784,"Juston",'M',20,390.0,"山东济南" };

	printf("stuID = %d\n", stu1.stuID);
	printf("name = %s\n", stu1.name);
	printf("sex = %c\n", stu1.sex);
	printf("age = %d\n", stu1.age);
	printf("score = %f\n", stu1.score);
	printf("address = %s\n", stu1.address);

	struct Student students[2];
	students[0] = { 2019101785,"Jason",'M',17,390.0,"上海" };
	students[1] = { 2019101786,"Wuyifan",'W',33,129.0,"北京" };

	for (int i = 0;i < 2;i++) {
		printf("\nstuID = %d\n", students[i].stuID);
		printf("name = %s\n", students[i].name);
		printf("sex = %c\n", students[i].sex);
		printf("age = %d\n", students[i].age);
		printf("score = %f\n", students[i].score);
		printf("address = %s\n\n", students[i].address);
	}

	int size = sizeof(Student);
	printf("sizeof(Student) = %d\n",size);

	system("pause");
	return 0;
}