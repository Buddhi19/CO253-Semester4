#include <stdio.h>
#include <stdlib.h>

int* fib(int n,int *size){
    *size=n;
    if(n==1){
        int* dp=malloc(1*sizeof(int));
        dp[0]=1;
        return dp;
    }
    if(n==2){
        int* dp=malloc(2*sizeof(int));
        dp[0]=1;
        dp[1]=2;
        return dp;
    }
    int* dp=malloc((n+1)*sizeof(int));
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for(int i=3;i<n+1;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp;

}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",n);
    int size=0;
    int* fibonacci=fib(n,&size);
    for(int i=0;i<size;i++){
        printf("%d th fibonacci is %d\n",i+1,fibonacci[i]);
    }
    return 0;
}