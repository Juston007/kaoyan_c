#define p2
#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include "stdlib.h"

/*
		��ʽ�����ţ�
		%d���α���10����
		%o���α���8����
		%x���α���16����
		%c�ַ�����
		%f�����ͱ���
		%s�ַ��ͱ���
*/

int main() {
	//��׼����stdin		scanf
	/*
		int scnaf(const char *format,...);
		����ֵ����ȡ�ɹ��ĸ���������һ����ʽ���ַ��������������ɱ����
		��ʽ���ַ������ø�ʽ��������Ϊռλ����Ȼ��ɱ������Ӧռλ������Ŀ����һ��
	*/

	/*
		��������Ϊ��ʱ��scanf������
		���е����붼�ᱻ��ŵ��������У�������\nʱ�ᴥ��ƥ��
		�ڶ�ȡ%d%fʱ�����Զ����Կո���\n
	*/

#ifdef p1
	int i = 0;
	char ch;
	//��ȡ ��10\n�� ��10ƥ�䵽����i��������ֻʣ��\n
	scanf("%d", &i);
	printf("\"d=%d\"",i);
	//��ʱ���������� ��\n�� ���Ҷ�ȡ%c�����ԣ�scanf��������
	scanf("%c", &ch);
	printf("\"c=%c\"", ch);
#endif

#ifdef p2
	int i;
	float f;
	scanf("%d", &i);
	printf("\"i=%d\"", i);
	//�ڶ�ȡ%d%fʱ�����Զ����Կո���\n
	scanf("%f", &f);
	printf("\"f=%f\"", f);
#endif

	system("pause");
	return 0;
}