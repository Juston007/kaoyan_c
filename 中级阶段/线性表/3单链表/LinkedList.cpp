#include "LinkedList.h"

// 带头结点的链表
// Date:2022-02-07
// WrittenBy Juston

/**
typedef struct {
    ElementType data;
    struct LNode* next;
} LNode, * LinkedList;
*/

void InitList(LinkedList& list) {
    //申请一个头结点
    list = (LinkedList)malloc(sizeof(LNode));

    //申请失败，直接退出
    if (list == NULL) {
        exit(0);
    }

    //设置头结点的下一个结点指针为NULL
    list->next = NULL;
}

void DestoryList(LinkedList& list) {
    //指向下一个要销毁的结点
    LNode* node = list->next;
    //保存当前要销毁的结点
    LNode* current = NULL;

    while (node != NULL) {
        //先保存下一个结点的指针
        current = node;
        node = node->next;

        //然后释放空间
        free(current);
    }

    //将链表设置为空
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

    //申请一个结点
    LNode* current = (LNode*)malloc(sizeof(LNode));

    //申请失败，直接退出
    if (current == NULL) {
        exit(0);
    }

    //设置数据域
    current->data = element;

    //当前结点指向前驱结点的下一个结点
    current->next = prior->next;
    //前驱结点指向新结点
    prior->next = current;

    return TRUE;
}

bool ListDelete(LinkedList list, int index, ElementType& element) {
    //指向要删除结点的前驱
    LNode* prior = LocateElement(list, index - 1);

    if (index == 0) {
        prior = list;
    }

    if ((prior == NULL) || (prior->next == NULL)) {
        return FALSE;
    }

    //直接越过要删除的结点
    prior->next = prior->next->next;

    return TRUE;
}

LNode* LocateElement(LinkedList list, int index) {
    if (index < 0) {
        return NULL;
    }

    //从第一个结点开始找
    LNode* node = list->next;

    for (int i = 0;node != NULL;i++) {
        //找到了要查找的目的结点
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
        //找到了要查找的元素值
        if (node->data == element) {
            break;
        }

        node = node->next;
    }

    return node;
}

int Length(LinkedList list) {
    //长度为0，指向头结点
    int length = 0;
    LNode* node = list;

    //每读取一个结点，数量加一
    while ((node = node ->next) != NULL) {
        length++;
    }

    return length;
}

void PrintList(LinkedList list) {
    //指向头结点
    LNode* node = list;

    //打印下一个结点的元素值
    while ((node = node->next) != NULL) {
        printf("%2c", node->data);
    }
}

bool Empty(LinkedList list) {
    return list->next == NULL;
}