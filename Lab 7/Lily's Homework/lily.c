#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int selection(int n,int* arr)
{
    int count1=0;
    int count2=0;
    int* arr2=malloc(n*sizeof(int));
    memcpy(arr2,arr,n*sizeof(int));
    int min1,min2;
    for(int i=0;i<n-1;i++){
        min1=i;
        min2=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min1]){
                min1=j;
            }
            if(min1!=i){
                swap(&arr[min1],&arr[i]);
                count1++;
                continue;
            }
            if(arr2[j]>arr2[min2]){
                min2=j;
            }
            if(min2!=i){
                swap(&arr2[i],&arr2[min2]);
                count2++;
                continue;
            }
        }
    }
    printArray(arr,n);
    printArray(arr2,n);
    return count1>count2 ? count2:count1;
}


int main()
{
    int n;
    scanf("%d",&n);
    int* arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    printf("%d\n",selection(n,arr));
    free(arr);
    return 0;
}