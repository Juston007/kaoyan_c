#include "stdio.h"
#include "stdlib.h"

typedef int ElementType;

typedef struct Node {
	ElementType data;
	struct Node* lChild;
	struct Node* rChild;
}BinaryTreeNode, * BinaryTree;

//引用参数，相当于直接操作实参
void modifyNumber(int &number) {
	number = 5;
}

void fun(BinaryTree &tree) {
	tree = NULL;
}

int main() {
	int a = 10;

	printf("before modify number = %d\n", a);
	modifyNumber(a);
	printf("after modify number = %d\n", a);

	printf("\n");

	BinaryTree tree = (BinaryTree)malloc(sizeof(BinaryTreeNode));
	printf("before fun tree address = %#x ,value = %#x\n", &tree, tree);
	fun(tree);
	printf("after fun tree address = %#x ,value = %#x\n", &tree, tree);

	system("pause");
	return 0;
}