#define _CRT_SECURE_NO_WARNING
#include "stdlib.h"
#include "stdio.h"

/*
struct �ṹ������ {
	���� ��Ա1;
	���� ��Ա2;
	...
	���� ��Աn;
};
*/

//ֻ��Ҫ63byte���ɴ洢����ṹ�壬����ʵ��ȴ����68byte
//ԭ��32λϵͳ�У�������32λΪһ����Ԫ��ȡ����
//�ֽڶ��룺Ϊ�˸���Ķ�ȡ���ݣ����������ݰ��ŵ�ǰ��δ���4byte����������һ��
struct Student {
	int stuID;				//4 byte		1��
	char name[20];			//20byte		5��
	char gender;			//1 byte		1�У���3byte������һ��
	int age;				//4 byte		1��
	float score;			//4 byte		1��
	char address[30];		//30byte		8�У���2byte������һ��
};

int main() {
	//struct �ṹ������ �ṹ�����
	struct Student stu;
	printf("sizeof(Student) = %d\n", sizeof(stu));

	//�ṹ���������ֵ
	struct Student stu1 = { 2019101784,"Juston",'M',20,390.0,"ɽ������" };
	printf("stuID = %d\n", stu1.stuID);
	printf("name = %s\n", stu1.name);
	printf("sex = %c\n", stu1.gender);
	printf("age = %d\n", stu1.age);
	printf("score = %f\n", stu1.score);
	printf("address = %s\n", stu1.address);

	system("pause");
	return 0;
}