#include "stdio.h"
#include "stdlib.h"

#define bool		int
#define TRUE		1
#define FALSE		0

#define ElementType	char
#define INIT_SIZE	10

typedef struct {
    ElementType *data;  //ָʾ��̬���������ָ��
    int length;         //˳���ĵ�ǰ����
    int maxSize;        //˳�����������
} SequenceList;

/**
 * ���ܣ���ʼ��˳���
 * ���������list ˳���
 * �����������
 * ����ֵ����
*/
void InitList(SequenceList& list);
/**
 * ���ܣ�����˳���
 * ���������list ˳���
 * �����������
 * ����ֵ����
*/
void DestoryList(SequenceList& list);

/**
 * ���ܣ���˳����в���һ��Ԫ��
 * ���������list ˳���index �±ꣻelement Ԫ��
 * �����������
 * ����ֵ�������Ƿ�ɹ�
*/
bool ListInsert(SequenceList& list, int index, ElementType element);
/**
 * ���ܣ�ɾ�����Ա��е�һ��Ԫ��
 * ���������list ˳���index �±ꣻ
 * ���������element ��ɾ����Ԫ��
 * ����ֵ��ɾ���Ƿ�ɹ�
*/
bool ListDelete(SequenceList& list, int index, ElementType& element);

/**
 * ���ܣ�����˳��������
 * ���������list ˳���length �����������С��
 * �����������
 * ����ֵ�������Ƿ�ɹ�
*/
bool IncreaseSize(SequenceList& list, int length);

/**
 * ���ܣ���ȡ˳�����ָ��λ���ϵ�Ԫ��
 * ���������list ˳���index �±ꣻ
 * ���������element Ԫ�أ�
 * ����ֵ����ȡ�Ƿ�ɹ�
*/
bool LocateElement(SequenceList list, int index, ElementType& element);
/**
 * ���ܣ���ȡָ��Ԫ����˳����е�һ�γ��ֵ�λ��
 * ���������list ˳���element Ԫ��
 * �����������
 * ����ֵ��ָ��Ԫ�ص��±꣬�Ҳ������� -1
*/
int GetElement(SequenceList list, ElementType element);

/**
 * ���ܣ���ȡ˳�����
 * ���������list ˳���
 * �����������
 * ����ֵ��˳���ĳ���
*/
int Length(SequenceList list);
/**
 * ���ܣ���ӡ˳���
 * ���������list ˳���
 * �����������
 * ����ֵ����
*/
void PrintList(SequenceList list);
/**
 * ���ܣ��ж�˳����Ƿ�Ϊ�ձ�
 * ���������list ˳���
 * �����������
 * ����ֵ��˳����Ƿ�Ϊ��
*/
bool Empty(SequenceList list);