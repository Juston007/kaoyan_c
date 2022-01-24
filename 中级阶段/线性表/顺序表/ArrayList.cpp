
#include "ArrayList.h"

typedef struct {
	ElementType data[MAX_SIZE];
	int length;
} ArrayList;

void InitList(ArrayList& list) {
	//������Ԫ����Ϊ0
	for (int i = 0;i < MAX_SIZE;i++) {
		list.data[i] = 0;
	}

	//��ʼ������Ϊ0
	list.length = 0;
}

void DestoryList(ArrayList& list) {

}

bool ListInsert(ArrayList& list, int index, ElementType element) {
	//����±�index�Ƿ�Ϸ�
	if ((index >= 0) && (index <= list.length)) {
		return FALSE;
	}

	//�ռ䲻��
	if (list.length >= MAX_SIZE) {
		return FALSE;
	}

	//��λ��index������index��֮�������Ԫ�ض�����һλ
	for (int i = list.length;i > index;i--) {
		list.data[i] = list.data[i - 1];
	}

	//����Ԫ�طŵ�λ��index��
	list.data[index] = element;

	//����+1
	list.length++;

	return TRUE;
}

bool ListDelete(ArrayList& list, int index, ElementType& element) {
	//����±�index�Ƿ�Ϸ�
	if ((index >= 0) && index <= (list.length - 1)) {
		return FALSE;
	}

	//ȡ��Ҫ��ɾ����Ԫ��
	element = list.data[index];

	//��λ��index������index��֮�������Ԫ�ض�ǰ��һλ
	for (int i = index; i < list.length; i++) {
		list.data[i] = list.data[i + 1];
	}

	//����-1
	list.length--;

	return TRUE;
}

bool LocateElement(ArrayList list, int index, ElementType& element) {
	//����±�index�Ƿ�Ϸ�
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