#include <stdio.h>
#include <stdlib.h>

int* divisorsandMultiples(int n, int* arr){
    int* solution=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        int num=0;
        for (int j=0;j<n;j++){
            if (i!=j){
                if ((arr[j]%arr[i]==0) || (arr[i]%arr[j]==0)){
                    num+=1;
                }
            }
        }
        solution[i]=num;
    }
    return solution;
}
int main(){
    int n;
    scanf("%d",&n);
    int* arr=malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int* solution=divisorsandMultiples(n,arr);

    for (int i=0;i<n;i++){
        printf("%d\n",*(solution+i));
    }

    return 0;
}