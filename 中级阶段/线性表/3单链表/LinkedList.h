#include "stdio.h"
#include "stdlib.h"

#define bool		int
#define TRUE		1
#define FALSE		0

#define ElementType	char
#define INIT_SIZE	10

typedef struct LNode {
    ElementType data;       //结点的元素值
    struct LNode* next;     //指向下一个结点的指针
} LNode,*LinkedList;

/**
 * 功能：初始化链表
 * 输入参数：list 链表；
 * 输出参数：无
 * 返回值：无
*/
void InitList(LinkedList &list);

/**
 * 功能：销毁链表
 * 输入参数：list 链表；
 * 输出参数：无
 * 返回值：无
*/
void DestoryList(LinkedList &list);

/**
 * 功能：头插法创建链表
 * 输入参数：list 链表；
 * 输出参数：无
 * 返回值：无
*/
LinkedList ListHeadInsert(LinkedList& list);

/**
 * 功能：尾插法创建链表
 * 输入参数：list 链表；
 * 输出参数：无
 * 返回值：无
*/
LinkedList ListTailInsert(LinkedList& list);

/**
 * 功能：向链表中插入一个元素
 * 输入参数：list 链表；index 下标；element 元素
 * 输出参数：无
 * 返回值：插入是否成功
*/
bool ListInsert(LinkedList list, int index, ElementType element);
/**
 * 功能：删除线性表中的一个元素
 * 输入参数：list 链表；index 下标；
 * 输出参数：element 被删除的元素
 * 返回值：删除是否成功
*/
bool ListDelete(LinkedList list, int index, ElementType& element);

/**
 * 功能：获取链表中指定位置上的元素
 * 输入参数：list 链表；index 下标；
 * 输出参数：element 元素；
 * 返回值：获取是否成功
*/
LNode* LocateElement(LinkedList list, int index);
/**
 * 功能：获取指定元素在链表中第一次出现的位置
 * 输入参数：list 链表；element 元素
 * 输出参数：无
 * 返回值：指定元素的下标，找不到返回 -1
*/
LNode* GetElement(LinkedList list, ElementType element);

/**
 * 功能：获取链表长度
 * 输入参数：list 链表；
 * 输出参数：无
 * 返回值：链表的长度
*/
int Length(LinkedList list);
/**
 * 功能：打印链表
 * 输入参数：list 链表；
 * 输出参数：无
 * 返回值：无
*/
void PrintList(LinkedList list);
/**
 * 功能：判断链表是否为空表
 * 输入参数：list 链表；
 * 输出参数：无
 * 返回值：链表是否为空
*/
bool Empty(LinkedList list);