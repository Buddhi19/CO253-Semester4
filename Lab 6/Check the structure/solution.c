#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

int nextlargernode(int* arr,int left, int right,int key){
    for(int i=left;i<=right;i++){
        if(arr[i]>key){
            return i;
        }
    }
    return right+1;
}

bool validStructure(int*arr,int left,int right){
    if(left>right){
        return true;
    }
    int j=nextlargernode(arr,left+1,right,arr[left]);
    int root=arr[left];

    for (int i=j+1;i<=right;i++){
        if(arr[i]<=root){
            return false;
        }
    }
    return validStructure(arr,left+1,j-1)&&validStructure(arr, j, right);

}

bool isValid(int* arr,int n)
{
    if (n == 0)
        return false;

    return validStructure(arr, 0, n - 1);
}


int main(){
    int a[5]={2,1,3,4,5};
    if(isValid(a,5)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}