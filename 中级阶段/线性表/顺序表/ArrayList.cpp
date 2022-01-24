
#include "ArrayList.h"

typedef struct {
	ElementType data[MAX_SIZE];
	int length;
} ArrayList;

void InitList(ArrayList& list) {
	//将所有元素置为0
	for (int i = 0;i < MAX_SIZE;i++) {
		list.data[i] = 0;
	}

	//初始化长度为0
	list.length = 0;
}

void DestoryList(ArrayList& list) {

}

bool ListInsert(ArrayList& list, int index, ElementType element) {
	//检查下标index是否合法
	if ((index >= 0) && (index <= list.length)) {
		return FALSE;
	}

	//空间不足
	if (list.length >= MAX_SIZE) {
		return FALSE;
	}

	//将位置index（包括index）之后的所有元素都后移一位
	for (int i = list.length;i > index;i--) {
		list.data[i] = list.data[i - 1];
	}

	//将新元素放到位置index上
	list.data[index] = element;

	//长度+1
	list.length++;

	return TRUE;
}

bool ListDelete(ArrayList& list, int index, ElementType& element) {
	//检查下标index是否合法
	if ((index >= 0) && index <= (list.length - 1)) {
		return FALSE;
	}

	//取出要被删除的元素
	element = list.data[index];

	//将位置index（包括index）之后的所有元素都前移一位
	for (int i = index; i < list.length; i++) {
		list.data[i] = list.data[i + 1];
	}

	//长度-1
	list.length--;

	return TRUE;
}

bool LocateElement(ArrayList list, int index, ElementType& element) {
	//检查下标index是否合法
	if ((index >= 0) && index <= (list.length - 1)) {
		return FALSE;
	}
	else {
		element = list.data[index];
		return TRUE;
	}
}

int GetElement(ArrayList list, ElementType element) {
	for (int i = 0;i < list.length;i++) {
		if (element == list.data[i]) {
			return i;
		}
	}

	return -1;
}

int Length(ArrayList list) {
	return list.length;
}

void PrintList(ArrayList list) {

}

bool Empty(ArrayList list) {
	return list.length == 0;
}