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

void PrintList(LinkedList* plist)
{
	for (Node* cur = plist->head->next; cur != NULL; cur = cur->next)
		printf("%d\n", cur->item);
}

// Remove all nodes in a list in sequence.
void ClearList(LinkedList* plist)
{
	while (plist->head->next != NULL)
		RemoveFirst(plist);
	free(plist->head);
}