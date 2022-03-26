#define _CRT_SECURE_NO_WARNINGS
#include "string.h"

int fun1(int arg1, int arg2) {
	return (arg1 + arg2) / 2;
}

char* fun2(char* str1, const char* str2) {
	return strcat(str1, str2);
}