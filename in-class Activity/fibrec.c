#include <stdio.h>

int fib(int n){
    if(n==1 || n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}


int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        printf("%d th fibonacci number is %d\n",i,fib(i));
    }
    return 0;
}