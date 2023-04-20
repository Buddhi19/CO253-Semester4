#include <stdio.h>
#include <stdlib.h>

int* sorted(int*arr,int n){
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}


int* zigzag(int* arr,int n){
    arr=sorted(arr,n);
    for (int i=0;i<n-1;i+=2){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    return arr;
}


int main(){
    int n;
    scanf("%d",&n);
    int *arr=malloc(n*sizeof(n));
    for (int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    arr=zigzag(arr,n);
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}