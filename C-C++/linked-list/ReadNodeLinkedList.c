#include <stdio.h>
typedef enum { false, true } bool;
typedef int Data;

typedef struct _Node
{
	Data item;
	struct _Node* next;
} Node;

typedef struct
{
	Node* head;
	int len;
} LinkedList;

void InitList(LinkedList* plist)
{
	plist->head = (Node *)malloc(sizeof(Node));
	plist->head->next = NULL;
	plist->len = 0;
}

bool IsEmpty(LinkedList* plist)
{
	return plist->len == 0;
}

Data ReadItem(LinkedList* plist, int pos)
{
	Node* cur;
	if (IsEmpty(plist) || pos < 0 || pos >= plist->len)
		exit(1);

	// Move the cur pointer to the k-th position.
	cur = plist->head->next;
	for (int i = 0; i < pos; i++)
		cur = cur->next;

	return cur->item;
}