#include "stdio.h"
#include "stdlib.h"

#define bool		int
#define TRUE		1
#define FALSE		0

#define ElementType	int
#define MAX_SIZE	10

typedef struct {
	ElementType data[MAX_SIZE];
	int length;
} ArrayList;

void InitList(ArrayList& list);
void DestoryList(ArrayList& list);

bool ListInsert(ArrayList& list, int index, ElementType element);
bool ListDelete(ArrayList &list, int index, ElementType &element);

bool LocateElement(ArrayList list,int index, ElementType &element);
int GetElement(ArrayList list, ElementType element);

int Length(ArrayList list);
void PrintList(ArrayList list);
bool Empty(ArrayList list);