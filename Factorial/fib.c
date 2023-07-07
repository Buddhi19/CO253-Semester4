#include <stdio.h>

long int fibo(int n)
{
    return n<=1 ? n:fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("answer is %ld\n",fibo(n));
    return 0;
}