#include "SequenceList.h"

// 动态分配的顺序表
// Date:2022-01-25
// WrittenBy Juston

void InitList(SequenceList& list) {
	list.data = (ElementType *)malloc(INIT_SIZE * sizeof(ElementType));

	if (list.data == NULL) {
		return;
	}

	//将所有元素置为0
	for (int i = 0; i < INIT_SIZE; i++) {
		list.data[i] = 0;
	}

	//初始化当前长度和最大长度
	list.length = 0;
	list.maxSize = INIT_SIZE;
}

void DestoryList(SequenceList& list) {
	list.length = 0;
	list.maxSize = 0;

	free(list.data);
	list.data = NULL;
}

bool IncreaseSize(SequenceList& list,int length) {
	ElementType* pointer;
	int newSize = list.maxSize + length;

	pointer = (ElementType *)realloc(list.data, newSize * sizeof(ElementType));

	if (pointer == NULL) {
		return FALSE;
	}
	else {
		list.data = pointer;
		list.maxSize += length;
		return TRUE;
	}
}

bool ListInsert(SequenceList& list, int index, ElementType element) {
	//检查下标index是否合法
	if (!((index >= 0) && (index <= list.length))) {
		return FALSE;
	}

	//空间不足，尝试扩容
	if (list.length >= list.maxSize) {
		if (!IncreaseSize(list, list.maxSize / 2)) {
			return FALSE;
		}
	}

	//将位置index（包括index）之后的所有元素都后移一位
	for (int i = list.length; i > index; i--) {
		list.data[i] = list.data[i - 1];
	}

	//将新元素放到位置index上
	list.data[index] = element;

	//长度+1
	list.length++;

	return TRUE;
}

bool ListDelete(SequenceList& list, int index, ElementType& element) {
	//检查下标index是否合法
	if (!((index >= 0) && index <= (list.length - 1))) {
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

bool LocateElement(SequenceList list, int index, ElementType& element) {
	//检查下标index是否合法
	if (!((index >= 0) && index <= (list.length - 1))) {
		return FALSE;
	}
	else {
		element = list.data[index];
		return TRUE;
	}
}

int GetElement(SequenceList list, ElementType element) {
	for (int i = 0; i < list.length; i++) {
		if (element == list.data[i]) {
			return i;
		}
	}

	return -1;
}

int Length(SequenceList list) {
	return list.length;
}

void PrintList(SequenceList list) {
	printf("list.length = %d\n", list.length);
	for (int i = 0; i < list.length; i++) {
		printf("%2c", list.data[i]);
	}
}

bool Empty(SequenceList list) {
	return list.length == 0;
}