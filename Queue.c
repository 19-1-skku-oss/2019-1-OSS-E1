#include <stdio.h>

#define MAX_QUEUE	100

typedef enum { false, true } bool; 
typedef int Data;

typedef struct {
	int front, rear;
	Data items[MAX_QUEUE];
} Queue;

void InitQueue(Queue *pqueue)
{
	pqueue->front = pqueue->rear = 0;
}

bool IsFull(Queue *pqueue)
{
	return pqueue->front
		== (pqueue->rear + 1) % MAX_QUEUE;
}

bool IsEmpty(Queue *pqueue)
{
	return pqueue->front == pqueue->rear;
}

Data Peek(Queue *pqueue)
{
	if (IsEmpty(pqueue))
		exit(1); //error: empty stack
	return pqueue->items[pqueue->front];
}

void EnQueue(Queue *pqueue, Data item)
{
	if (IsFull(pqueue))
		exit(1); //error: stack full
	pqueue->items[pqueue->rear] = item;
	pqueue->rear = (pqueue->rear + 1) % MAX_QUEUE;
}

void DeQueue(Queue *pqueue)
{
	if (IsEmpty(pqueue))
		exit(1); //error: empty stack
	pqueue->front = (pqueue->front + 1) % MAX_QUEUE;
}