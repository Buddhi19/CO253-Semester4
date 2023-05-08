#include <stdio.h>
#include <stdlib.h>

int* bubblesorted(int* array,int n){
    for(int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    return array;
}

int main(){
    int n;
    scanf("%d",&n);
    int* array=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    int* sortedarray=bubblesorted(array,n);
    for(int i=0;i<n;i++){
        printf("%d\n",sortedarray[i]);
    }
    return 0;
}