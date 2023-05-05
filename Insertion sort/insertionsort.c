#include <stdio.h>
#include <stdlib.h>



int* insertionsort(int* arr,int n,int* result_length){
    *result_length=n;
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while (j>=0 && key<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return arr;
}




int main(){
    int n;
    scanf("%d",&n);
    int* arr=malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int* result_length;
    int* solution=insertionsort(arr,n,*&result_length);
    for(int i=0;i<*result_length;i++){
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return 0;
}