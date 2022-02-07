#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct tag {
	char c;
	struct tag* pleft;
	struct tag* right;
}Node, * pNode;
#define  N 10
void preOrder(Node* p) {
	if (p != NULL) {
		putchar(p->c);
		preOrder(p->pleft);
		preOrder(p->right);
	}
}
void midOrder(pNode p) {
	if (p != NULL) {

		midOrder(p->pleft);
		putchar(p->c);
		midOrder(p->right);
	}
}
void aftOrder(pNode p) {
	if (p != NULL) {

		aftOrder(p->pleft);
		aftOrder(p->right);
		putchar(p->c);
	}
}
void levelOrder(pNode p) {
	int front, rear;
	pNode queue[N];
	front = rear = 0;
	pNode q;
	if (p != NULL) {
		rear = (rear + 1) % N;
		queue[rear] = p;
		while (front != rear)
		{
			front = (front + 1) % N;
			q = queue[front];
			putchar(q->c);
			if (q->pleft != NULL)
			{
				rear = (rear + 1) % N;
				queue[rear] = q->pleft;

			}
			if (q->right != NULL)
			{
				rear = (rear + 1) % N;
				queue[rear] = q->right;
			}
		}
	}
}
int main() {       //�������Ż��Ŀ��Խ�һ����������(����)����ʱ�临�Ӷȡ�
	char c[N + 1] = "abcdefghij";     //abcdefghij

	Node* p[N];       //p[]��ʮ��Ԫ�ء��±��0����9.
	pNode tree;
	int i, j;
	for (i = 0; i < N; i++) {
		p[i] = (pNode)calloc(1, sizeof(Node));
		p[i]->c = c[i];
	}
	tree = p[0];   //tree ��������
	for (i = 0; i < N; i++)    //���ѭ������������߷ŵ�Ԫ��
	{
		for (j = 0; j < i; j++)
		{
			if (p[j]->pleft == NULL)	           //�ڲ�ѭ�������п��е�λ�á�
			{
				p[j]->pleft = p[i];
				break;
			}
			if (p[j]->right == NULL)
			{
				p[j]->right = p[i];
				break;
			}
		}

	}
	preOrder(p[0]);
	printf("\n");
	midOrder(tree);
	printf("\n");
	aftOrder(tree);
	printf("\n");
	levelOrder(tree);

	return 0;
}
