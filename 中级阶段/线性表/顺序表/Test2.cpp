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
			//插入元素
			scanf("%d %c", &index, &element);
			result = ListInsert(list, index, element);
			printf("insert element execute %s", result ? "success" : "failure");
			break;

		case 'd':
			//删除元素
			scanf("%d", &index);
			result = ListDelete(list, index, element);
			printf("delete element execute %s", result ? "success" : "failure");
			break;

		case 'l':
			//获取某个位置上的元素
			scanf("%d", &index);
			result = LocateElement(list, index, element);
			printf("locate position[%d] element = %c\n", index, result ? element : '?');
			break;

		case 'g':
			//获取某个元素的位置
			scanf(" %c", &element);
			index = GetElement(list, element);
			printf("get element[%c] position = %d\n", element, index);
			break;

		case 'p':
			//打印顺序表
			PrintList(list);
			break;

		case 'h':
			//打印帮助
			PrintHelp();
			break;

		case 'e':
			//退出
			return 0;
		}
	}

	system("pause");
	return 0;
}