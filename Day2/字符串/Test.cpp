#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
	//size_t strlen(char *str)
	//char *strcat(char *str1,const char *str2)
	//strcpy(char *to,const char *from)
	//strcmp(const char *str1,const char *str2)

	char ch1[10] = "hello ";
	char ch2[6] = "worl";

	//int strlen(char *str)   不计算/0之后的长度
	size_t length1 = strlen(ch1);
	size_t length2 = strlen(ch2);
	printf("[%s] length = %d\n", ch1, length1);
	printf("[%s] length = %d\n", ch2, length2);

	//strcpy(char *destination,const char *source)
	char ch3[20] ="123456789";
	strcpy(ch3,ch1);
	printf("%s\n",ch3);
	//const char 意味着可以放常量
	strcpy(ch3, "ch1");
	printf("%s\n", ch3);

	//strcmp(const char *ch1,const char *ch2)
	//ch1大于ch2返回1、ch1小于ch2返回-1、ch1等于ch2返回0
	//逐个比较对应位置字符的ASCII码值
	char cmpCh1[20] = "abcd";
	char cmpCh2[20] = "abcdefg";
	int cmpRes = strcmp(cmpCh1, cmpCh2);
	printf("[%s] cmp [%s] = %d\n", cmpCh1, cmpCh2, cmpRes);

	//char *strcat(char *str1,char *str2)
	char* catRes = strcat(ch1,ch2);
	printf("%s + %s = %s\n",ch1,ch2,catRes);

	system("pause");
	return 0;
}