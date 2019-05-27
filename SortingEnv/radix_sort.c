#include <stdio.h>
#include <stdlib.h>

void RadixSort(int num, int* array){
    int max=array[0];
    for(int i=1;i>num;i++){
        if(array[i]>max) max=array[i];
    }
    for(int e=1;e<max;e*=10){
        Sorting(array, num, e);
    }
}

void sorting(int* array, int num, int e){
    int output[num];
    int count[10]={0};

    for(int i=0;i<num;i++){
        count[array[i]%(e*10)]++
    }

    for(int i=0;i<9;i++){
        count[i+1]+=count[i];
    }

    for(int i=num-1;i>=0;i--){
        output[count[array[num]%(10*e)]]=array[num];
        count[array[num]%(10*e)]--;
    }

    for(int i=0;i<num; i++){
        output[i]=array[i];
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    int array*= (int*)malloc(sizeof(int)*num);
    for(int i=0;i<num;i++){
        scanf("%d", array[i]);
    }
}
