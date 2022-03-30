#include "stdio.h"
#include "stdlib.h"

typedef int		Boolean;
#define TRUE	1
#define FALSE	0

/*
* typedef is used to create an additional name for another data type,
* but does not create a new type
*/

//typedef �������� ��������
typedef int ElementType;

/*
typedef struct �ṹ����{
	���� ��Ա1;
	���� ��Ա2;
	...
	���� ��Աn;
} 1��������������2;
*/
typedef struct Lnode {
	ElementType data;
	struct Lnode* lChild;
	struct Lnode* rChild;
} LNode, * LinkedList;


int main() {
	LNode head;
	LinkedList list = &head;

	list->data = 1;
	list->lChild = list->rChild = NULL;

	printf("list->data=%d\n", list->data);
	printf("list->lChild=%d\n", list->lChild);
	printf("list->rChild=%d\n", list->rChild);

	system("pause");
	return 0;
}