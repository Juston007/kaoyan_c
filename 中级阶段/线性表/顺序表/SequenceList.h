#include "stdio.h"
#include "stdlib.h"

#define bool		int
#define TRUE		1
#define FALSE		0

#define ElementType	char
#define INIT_SIZE	10

typedef struct {
    ElementType *data;  //指示动态分配数组的指针
    int length;         //顺序表的当前长度
    int maxSize;        //顺序表的最大容量
} SequenceList;

/**
 * 功能：初始化顺序表
 * 输入参数：list 顺序表；
 * 输出参数：无
 * 返回值：无
*/
void InitList(SequenceList& list);
/**
 * 功能：销毁顺序表
 * 输入参数：list 顺序表；
 * 输出参数：无
 * 返回值：无
*/
void DestoryList(SequenceList& list);

/**
 * 功能：向顺序表中插入一个元素
 * 输入参数：list 顺序表；index 下标；element 元素
 * 输出参数：无
 * 返回值：插入是否成功
*/
bool ListInsert(SequenceList& list, int index, ElementType element);
/**
 * 功能：删除线性表中的一个元素
 * 输入参数：list 顺序表；index 下标；
 * 输出参数：element 被删除的元素
 * 返回值：删除是否成功
*/
bool ListDelete(SequenceList& list, int index, ElementType& element);

/**
 * 功能：扩充顺序表的容量
 * 输入参数：list 顺序表；length 扩充的容量大小；
 * 输出参数：无
 * 返回值：扩充是否成功
*/
bool IncreaseSize(SequenceList& list, int length);

/**
 * 功能：获取顺序表中指定位置上的元素
 * 输入参数：list 顺序表；index 下标；
 * 输出参数：element 元素；
 * 返回值：获取是否成功
*/
bool LocateElement(SequenceList list, int index, ElementType& element);
/**
 * 功能：获取指定元素在顺序表中第一次出现的位置
 * 输入参数：list 顺序表；element 元素
 * 输出参数：无
 * 返回值：指定元素的下标，找不到返回 -1
*/
int GetElement(SequenceList list, ElementType element);

/**
 * 功能：获取顺序表长度
 * 输入参数：list 顺序表；
 * 输出参数：无
 * 返回值：顺序表的长度
*/
int Length(SequenceList list);
/**
 * 功能：打印顺序表
 * 输入参数：list 顺序表；
 * 输出参数：无
 * 返回值：无
*/
void PrintList(SequenceList list);
/**
 * 功能：判断顺序表是否为空表
 * 输入参数：list 顺序表；
 * 输出参数：无
 * 返回值：顺序表是否为空
*/
bool Empty(SequenceList list);