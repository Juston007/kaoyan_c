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
int main() {       //不是最优化的可以建一个辅助变量(队列)降低时间复杂度。
	char c[N + 1] = "abcdefghij";     //abcdefghij

	Node* p[N];       //p[]有十个元素。下标从0——9.
	pNode tree;
	int i, j;
	for (i = 0; i < N; i++) {
		p[i] = (pNode)calloc(1, sizeof(Node));
		p[i]->c = c[i];
	}
	tree = p[0];   //tree 是树根。
	for (i = 0; i < N; i++)    //外层循环控制往树里边放的元素
	{
		for (j = 0; j < i; j++)
		{
			if (p[j]->pleft == NULL)	           //内层循环找树中空闲的位置。
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
