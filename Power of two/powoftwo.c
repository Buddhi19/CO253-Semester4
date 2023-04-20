#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int* powoftwo(int arr_count,int* arr,int* result_count){
    * result_count=arr_count;
    int* solution=malloc(arr_count*sizeof(int));
    for (int i=0;i<arr_count;i++){
        if(ceil(log2(arr[i]))==floor(log2(arr[i]))){
            solution[i]=1;
        }
        else{
            solution[i]=0;
        }
        // printf("%d ",solution[i]);
    }
    return solution;
}


int main(){
    int n;
    scanf("%d",&n);
    int* prob=malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&prob[i]);
    }
    int* len;
    int* sol=powoftwo(n,prob,*&len);
    for (int i=0;i<*len;i++){
        printf("%d ",sol[i]);
    }
    printf("\n");
    return 0;
}