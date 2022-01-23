#include "stdio.h"
#include "stdlib.h"

//枚举
enum Status {
	open	=	1,
	close	=	0,
	stop	=	-1
};

//自定义类型
typedef enum StudentStatus {
	studying	=	12,
	sleeping	=	64,
	eating		=	99
}StuStatus;

int main() {

	enum Status s1 = close;
	printf("status = %d\n",s1);

	StuStatus s2 = sleeping;
	printf("stu status = %d\n",s2);

	system("pause");
	return 0;
}