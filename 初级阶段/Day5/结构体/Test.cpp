#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

//����һ���ṹ�����͵�һ����ʽ
//ֻ��Ҫ63byte�Ϳ��Դ洢����ṹ�壬��������ṹ��ʵ����ռ��68�ֽ�

//ԭ��
//CPU������4byteҲ����32bit��8bytes��64bit����ȡָ�������
//�Զ���byte��ȡָ������ݣ�ȡ����MDR��IR
//��������룬����һ��int��������Ҫ��ȡ����
//�������ֻ��һ�ξ��ܴ�ȡ�����ǻ��˷ѿռ�
struct Student {	 //4byte ��32bit��Ϊһ��
	int stuID;		 //4bytes		1��
	char name[20];	 //20bytes		5��
	char sex;		 //1byte		1�У�Ϊ�˶��룬���п���3bytes
	int age;		 //4bytes		1��
	float score;	 //4bytes		1��
	char address[30];//30bytes		8�У�Ϊ�˶��룬���һ�п���2bytes
};//�ṹ���������������һ��Ҫ�ӷֺ�

int main() {
	//�������ṹ�����ͣ��ٶ��������
	//��ʼ��
	struct Student stu1 = { 2019101784,"Juston",'M',20,390.0,"ɽ������" };

	printf("stuID = %d\n", stu1.stuID);
	printf("name = %s\n", stu1.name);
	printf("sex = %c\n", stu1.sex);
	printf("age = %d\n", stu1.age);
	printf("score = %f\n", stu1.score);
	printf("address = %s\n", stu1.address);

	struct Student students[2];
	students[0] = { 2019101785,"Jason",'M',17,390.0,"�Ϻ�" };
	students[1] = { 2019101786,"Wuyifan",'W',33,129.0,"����" };

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