#include "stdio.h"
#include "Another.h"

//��������
void fun1(const char *from) {
	printf("%s call another fun1\n", from);
	fun2("Another.cpp fun1", 1, 2);
}

//��������
void fun2(const char* from,int a,int b) {
	printf("%s call another fun2 ", from);
	printf("%d + %d = %d\n", a, b, a + b);
}