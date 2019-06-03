#include <stdio.h>
#include <stdlib.h>

#define Length 10

typedef enum {false,true} bool;
typedef int Data;

typedef struct{
    Data data;
    int priority;
}HNode;

typedef struct{
    HNode items[Length+1];
    int num;
}Heap;

void InitHeap(Heap *pheap){
    pheap->num=0;
}

bool IsEmpty(Heap *pheap){
    return pheap->num==0;
}

bool IsFull(Heap *pheap){
    return pheap->num==Length;
}


int GetParent(int idx){
    return idx/2;
}

int GetLChild(int idx){
    return idx*2;
}

int GetRChild(int idx){
    return idx*2+1;
}

int GetHighPriorityChild(Heap *pheap, int idx){
    if(GetLChild(idx)>pheap->num) return 0;
    else if(GetLChild(idx)==pheap->num) return GetLChild(idx);
    else{
        if(pheap->items[GetLChild(idx)].priority>pheap->items[GetRChild(idx)].priority){
            return GetLChild(idx);
        }
        else return GetRChild(idx);
    }
}

void Insert(Heap *pheap, Data data, int priority){
    HNode newnode;
    int idx=pheap->num+1;
    if(IsFull(pheap)) exit(1);
    while(idx>1){
        int parent= GetParent(idx);
        if(priority>pheap->items[parent].priority){
            pheap->items[idx]=pheap->items[parent];
            idx=parent;
        }
        else break;
    }
    newnode.data=data;
    newnode.priority=priority;

    pheap->items[idx]=newnode;
    pheap->num++;
}

Data Delete(Heap *pheap){
    Data max= pheap->items[1].data;
    HNode fin=pheap->items[pheap->num];
    int parent=1, child;
    while(child= GetHighPriorityChild(pheap, parent)){
        if(pheap->items[child].priority>fin.priority){
            pheap->items[parent]=pheap->items[child];
            parent=child;
        }
        else break;
    }
    pheap->items[parent]=fin;
    pheap->num--;

    return max;
}

// Heap

typedef Heap PQueue;

void InitPQueue (PQueue* ppqueue){
    InitHeap(ppqueue);
}

bool IsPQueue(PQueue* ppqueue){
    return IsEmpty(ppqueue);
}

bool IsPQFull(PQueue* ppqueue){
    return IsFull(ppqueue);
}

void Enqueue(PQueue* ppqueue, Data data, int priority){
    Insert(ppqueue, data, priority);
}

Data Dequeue(PQueue* ppqueue){
    Delete(ppqueue);
}

void HeapSort(Data a[], int n){
    Heap heap;
    InitHeap(&heap);

    for(int i=0;i<n;i++){
        Enqueue(&heap, a[i], a[i]);
    }

    for(int i=n-1;i>=0;i--){
        a[i]=Dequeue(&heap);
    }
}

//priority queue

int main(){
    Data input[Length]={34, 23 ,12 ,54 ,2 ,32, 176, 21, 908, 376 };

    printf("Initial input :");
    for(int i=0;i<Length;i++){
        printf("%d ", input[i]);
    }
    printf("\n");

    HeapSort(input, Length);

    printf("After Sorting: ")

    for(int i=0;i<Length;i++){
        printf("%d ", input[i]);
    }
}
