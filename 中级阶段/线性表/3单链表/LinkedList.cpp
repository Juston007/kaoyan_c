#include "LinkedList.h"

// ��ͷ��������
// Date:2022-02-07
// WrittenBy Juston

/**
typedef struct {
    ElementType data;
    struct LNode* next;
} LNode, * LinkedList;
*/

void InitList(LinkedList& list) {
    //����һ��ͷ���
    list = (LinkedList)malloc(sizeof(LNode));

    //����ʧ�ܣ�ֱ���˳�
    if (list == NULL) {
        exit(0);
    }

    //����ͷ������һ�����ָ��ΪNULL
    list->next = NULL;
}

void DestoryList(LinkedList& list) {
    //ָ����һ��Ҫ���ٵĽ��
    LNode* node = list->next;
    //���浱ǰҪ���ٵĽ��
    LNode* current = NULL;

    while (node != NULL) {
        //�ȱ�����һ������ָ��
        current = node;
        node = node->next;

        //Ȼ���ͷſռ�
        free(current);
    }

    //����������Ϊ��
    list = NULL;
}

LinkedList ListHeadInsert(LinkedList& list) {
    return NULL;
}

LinkedList ListTailInsert(LinkedList& list) {
    return NULL;
}

bool ListInsert(LinkedList list, int index, ElementType element) {
    LNode* prior = LocateElement(list, index - 1);

    if (index == 0) {
        prior = list;
    }

    if (prior == NULL) {
        return FALSE;
    }

    //����һ�����
    LNode* current = (LNode*)malloc(sizeof(LNode));

    //����ʧ�ܣ�ֱ���˳�
    if (current == NULL) {
        exit(0);
    }

    //����������
    current->data = element;

    //��ǰ���ָ��ǰ��������һ�����
    current->next = prior->next;
    //ǰ�����ָ���½��
    prior->next = current;

    return TRUE;
}

bool ListDelete(LinkedList list, int index, ElementType& element) {
    //ָ��Ҫɾ������ǰ��
    LNode* prior = LocateElement(list, index - 1);

    if (index == 0) {
        prior = list;
    }

    if ((prior == NULL) || (prior->next == NULL)) {
        return FALSE;
    }

    //ֱ��Խ��Ҫɾ���Ľ��
    prior->next = prior->next->next;

    return TRUE;
}

LNode* LocateElement(LinkedList list, int index) {
    if (index < 0) {
        return NULL;
    }

    //�ӵ�һ����㿪ʼ��
    LNode* node = list->next;

    for (int i = 0;node != NULL;i++) {
        //�ҵ���Ҫ���ҵ�Ŀ�Ľ��
        if (i == index) {
            break;
        }

        node = node->next;
    }

    return node;
}

LNode* GetElement(LinkedList list, ElementType element) {

    LNode* node = list->next;

    while(node != NULL) {
        //�ҵ���Ҫ���ҵ�Ԫ��ֵ
        if (node->data == element) {
            break;
        }

        node = node->next;
    }

    return node;
}

int Length(LinkedList list) {
    //����Ϊ0��ָ��ͷ���
    int length = 0;
    LNode* node = list;

    //ÿ��ȡһ����㣬������һ
    while ((node = node ->next) != NULL) {
        length++;
    }

    return length;
}

void PrintList(LinkedList list) {
    //ָ��ͷ���
    LNode* node = list;

    //��ӡ��һ������Ԫ��ֵ
    while ((node = node->next) != NULL) {
        printf("%2c", node->data);
    }
}

bool Empty(LinkedList list) {
    return list->next == NULL;
}