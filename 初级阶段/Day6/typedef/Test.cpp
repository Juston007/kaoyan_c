#include "stdio.h"
#include "stdlib.h"

typedef int		Boolean;
#define TRUE	1
#define FALSE	0

//定义一个结构体
struct Student {
	int stuID;
	char name[20];
	char sex;
	struct Student* next;
};

//使用typedef可以定义自己的类型
typedef int ElementType;

//采用typedef定义自己的结构体类型
typedef struct Node {
	ElementType data;
	struct Node* lChild;
	struct Node* rChild;
}BinaryTreeNode, * BinaryTree;
//BinaryTreeNode是新定义的类型，声明时不用加struct，可以像int一样使用
//BinaryTree是新定义的结构体指针，BinaryTree就等同于BinaryTreeNode*


int main() {

	//结构体变量与结构体指针
	struct Student stu1;
	struct Student* pStu1;

	BinaryTree tree = (BinaryTree)malloc(sizeof(BinaryTreeNode));
	tree->data = 'A';
	tree->lChild = tree->rChild = tree;

	system("pause");
	return 0;
}