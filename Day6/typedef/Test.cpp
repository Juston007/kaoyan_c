#include "stdio.h"
#include "stdlib.h"

typedef int		Boolean;
#define TRUE	1
#define FALSE	0

//����һ���ṹ��
struct Student {
	int stuID;
	char name[20];
	char sex;
	struct Student* next;
};

//ʹ��typedef���Զ����Լ�������
typedef int ElementType;

//����typedef�����Լ��Ľṹ������
typedef struct Node {
	ElementType data;
	struct Node* lChild;
	struct Node* rChild;
}BinaryTreeNode, * BinaryTree;
//BinaryTreeNode���¶�������ͣ�����ʱ���ü�struct��������intһ��ʹ��
//BinaryTree���¶���Ľṹ��ָ�룬BinaryTree�͵�ͬ��BinaryTreeNode*


int main() {

	//�ṹ�������ṹ��ָ��
	struct Student stu1;
	struct Student* pStu1;

	BinaryTree tree = (BinaryTree)malloc(sizeof(BinaryTreeNode));
	tree->data = 'A';
	tree->lChild = tree->rChild = tree;

	system("pause");
	return 0;
}