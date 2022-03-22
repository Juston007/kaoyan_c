#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
	//在C语言中，没有字符串类型，只能用字符数组来存储字符串
	//在像下方一样初始化时，会自动在结尾追加\0作为字符串结束标志
	char str1[12] = "hello";
	char str2[12] = "world";

	//在使用printf打印字符串时，会一直打印到遇见\0为止
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	//计算字符串长度	不计算/0之后的长度
	//int strlen(char *str)
	printf("length of str1 is %d\n", strlen(str1));

	//C语言没法用操作符+对字符串进行连接操作
	//需要使用char *strcat(char *str1,const char *str2)
	char* cat = strcat(str1, str2);
	printf("res = %s\n", cat);

	//字符串复制 从source复制到destination，source可以是字符串常量
	//strcpy(char *destination,const char *source)
	char* newStr = (char *)malloc(50);
	char* cpy = strcpy(newStr,"hello world!");
	printf("new string = %s\n", cpy);

	//比较字符串是否相等
	//strcmp(const char *str1,const char *str1)
	//str1=str2返回0 str1>str2返回1 str1<str2返回-1
	//从开始比较两个字符串对应的字符的ASCII值，直到结束或者不相等返回比较结果
	char cmp1[10] = "1237";
	char cmp2[10] = "12361345";

	printf("cmp1 cmpare cmp2 = %d\n", strcmp(cmp1, cmp2));

	system("pause");
	return 0;
}