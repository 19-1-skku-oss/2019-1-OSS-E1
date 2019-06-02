#include <stdio.h>
#include <stdlib.h>

int Sorting(int *array, int left, int right){
    int low= left+1, high =right;
    int pivot = array[left];
    int temp;
    while(low<high){
        while(array[low]<pivot) low++;
        while(array[high]>=pivot) high--;

        if(high>low){
            temp=array[low];
            array[low]=array[high];
            array[high]=temp;
        }
    }
    array[left]=array[high];
    array[high]=pivot;
    return high;
}

void QuickSort(int *array, int num){
    int left=0;right=num-1
    if(left<right){
        int mid=Sorting(array, left, right)

        QuickSort(array, left, mid-1);
        QuickSort(array, mid+1,right);
    }
}

int main()
{
    int num;
    scanf("%d", &num);

    int *array= (int*)malloc(sizeof(int)*num);
    for(int i=0;i<num;i++){
        scanf("%d", &array[i]);
    }
}
