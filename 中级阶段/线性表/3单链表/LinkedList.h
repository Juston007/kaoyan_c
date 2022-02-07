#include "stdio.h"
#include "stdlib.h"

#define bool		int
#define TRUE		1
#define FALSE		0

#define ElementType	char
#define INIT_SIZE	10

typedef struct LNode {
    ElementType data;       //����Ԫ��ֵ
    struct LNode* next;     //ָ����һ������ָ��
} LNode,*LinkedList;

/**
 * ���ܣ���ʼ������
 * ���������list ����
 * �����������
 * ����ֵ����
*/
void InitList(LinkedList &list);

/**
 * ���ܣ���������
 * ���������list ����
 * �����������
 * ����ֵ����
*/
void DestoryList(LinkedList &list);

/**
 * ���ܣ�ͷ�巨��������
 * ���������list ����
 * �����������
 * ����ֵ����
*/
LinkedList ListHeadInsert(LinkedList& list);

/**
 * ���ܣ�β�巨��������
 * ���������list ����
 * �����������
 * ����ֵ����
*/
LinkedList ListTailInsert(LinkedList& list);

/**
 * ���ܣ��������в���һ��Ԫ��
 * ���������list ����index �±ꣻelement Ԫ��
 * �����������
 * ����ֵ�������Ƿ�ɹ�
*/
bool ListInsert(LinkedList list, int index, ElementType element);
/**
 * ���ܣ�ɾ�����Ա��е�һ��Ԫ��
 * ���������list ����index �±ꣻ
 * ���������element ��ɾ����Ԫ��
 * ����ֵ��ɾ���Ƿ�ɹ�
*/
bool ListDelete(LinkedList list, int index, ElementType& element);

/**
 * ���ܣ���ȡ������ָ��λ���ϵ�Ԫ��
 * ���������list ����index �±ꣻ
 * ���������element Ԫ�أ�
 * ����ֵ����ȡ�Ƿ�ɹ�
*/
LNode* LocateElement(LinkedList list, int index);
/**
 * ���ܣ���ȡָ��Ԫ���������е�һ�γ��ֵ�λ��
 * ���������list ����element Ԫ��
 * �����������
 * ����ֵ��ָ��Ԫ�ص��±꣬�Ҳ������� -1
*/
LNode* GetElement(LinkedList list, ElementType element);

/**
 * ���ܣ���ȡ������
 * ���������list ����
 * �����������
 * ����ֵ������ĳ���
*/
int Length(LinkedList list);
/**
 * ���ܣ���ӡ����
 * ���������list ����
 * �����������
 * ����ֵ����
*/
void PrintList(LinkedList list);
/**
 * ���ܣ��ж������Ƿ�Ϊ�ձ�
 * ���������list ����
 * �����������
 * ����ֵ�������Ƿ�Ϊ��
*/
bool Empty(LinkedList list);