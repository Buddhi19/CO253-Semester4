#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

int pop(int* a){
    return a[1];
}
int* stackpop(int* a){
    int len=sizeof(a)/sizeof(int);
    int* arr=malloc((len-1)*sizeof(int));
    for (int i=1;i<len;i++){
        arr[i]=a[i];
    }
    return arr;
}

int* append(int* stack,int value){
    int len=sizeof(stack)/sizeof(int);
    stack=realloc(stack,(len+1)*sizeof(int));
    stack[-1]=value;
    return stack;
}

bool isValid(int a[],int n){
    int* stack=malloc(1*sizeof(int));
    int node=INT_MIN;
    for(int i=0;i<n;i++){
        int value=a[i];
        if (value<node){
            return false;
        }
        while(sizeof(stack)/sizeof(int)>1 && stack[-1]<value){
            node=pop(stack);
            stack=stackpop(stack);
        }

        append(stack,value);
    }
    return true;
}




int main(){
    int a[5]={40,30,35,80,100};
    if(isValid(a,5)){
        printf("YES\n");
    }
    return 0;
}