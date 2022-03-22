#define p2
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

/*
		格式化符号：
		%d整形变量10进制
		%o整形变量8进制
		%x整形变量16进制
		%c字符变量
		%f浮点型变量
		%s字符型变量
*/

int main() {
	//标准输入stdin		scanf
	/*
		int scnaf(const char *format,...);
		返回值：读取成功的个数；参数一：格式化字符串；参数二：可变参数
		格式化字符串中用格式化符号作为占位符，然后可变参数对应占位符，数目必须一致
	*/

	/*
		当缓冲区为空时，scanf被阻塞
		所有的输入都会被存放到缓冲区中，当遇到\n时会触发匹配
		在读取%d%f时，会自动忽略空格与\n
	*/

#ifdef p1
	int i = 0;
	char ch;
	//读取 “10\n“ ，10匹配到变量i，缓冲区只剩下\n
	scanf("%d", &i);
	printf("\"d=%d\"",i);
	//此时缓冲区还有 ”\n“ ，且读取%c不忽略，scanf不被阻塞
	scanf("%c", &ch);
	printf("\"c=%c\"", ch);
#endif

#ifdef p2
	int i;
	float f;
	scanf("%d", &i);
	printf("\"i=%d\"", i);
	//在读取%d%f时，会自动忽略空格与\n
	scanf("%f", &f);
	printf("\"f=%f\"", f);
#endif

	system("pause");
	return 0;
}