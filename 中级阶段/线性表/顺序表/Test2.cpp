#define _CRT_SECURE_NO_WARNINGS

#include "SequenceList.h"

void PrintHelp() {
	printf("help\n");
	printf("insert_element :i [index] [element]\n");
	printf("locate_element :l [index]\n");
	printf("get_element    :g [element]\n");
	printf("delete_element :d [index]\n");
	printf("print_list     :p\n");
	printf("help           :h\n");
	printf("exit           :e\n");
}

int main() {
	int index;
	bool result;
	char operate;
	ElementType element;

	SequenceList list;
	InitList(list);

	PrintHelp();

	while (true) {

		printf("\nSequenceList>");
		scanf("%c", &operate);

		switch (operate) {
		case 'i':
			//����Ԫ��
			scanf("%d %c", &index, &element);
			result = ListInsert(list, index, element);
			printf("insert element execute %s", result ? "success" : "failure");
			break;

		case 'd':
			//ɾ��Ԫ��
			scanf("%d", &index);
			result = ListDelete(list, index, element);
			printf("delete element execute %s", result ? "success" : "failure");
			break;

		case 'l':
			//��ȡĳ��λ���ϵ�Ԫ��
			scanf("%d", &index);
			result = LocateElement(list, index, element);
			printf("locate position[%d] element = %c\n", index, result ? element : '?');
			break;

		case 'g':
			//��ȡĳ��Ԫ�ص�λ��
			scanf(" %c", &element);
			index = GetElement(list, element);
			printf("get element[%c] position = %d\n", element, index);
			break;

		case 'p':
			//��ӡ˳���
			PrintList(list);
			break;

		case 'h':
			//��ӡ����
			PrintHelp();
			break;

		case 'e':
			//�˳�
			return 0;
		}
	}

	system("pause");
	return 0;
}