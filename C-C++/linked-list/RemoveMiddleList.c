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

void RemoveMiddle(LinkedList* plist, int pos)
{
	Node* cur, * temp;
	if (IsEmpty(plist) || pos < 0 || pos >= plist->len)
		exit(1);

	// Move the cur pointer to the (k-1)-th position.
	cur = plist->head;
	for (int i = 0; i < pos; i++)
		cur = cur->next;

	// Remove the node to the k-th position.
	temp = cur->next;
	cur->next = cur->next->next;
	plist->len--;
	free(temp);
}