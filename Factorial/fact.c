#include <stdio.h>

long int factorial(int n)
{
    long int ans=1;
    for(int i=1;i<n+1;i++)
    {
        ans*=i;
    }
    return ans;
}

long int factreq(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factreq(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%ld\n",factorial(n));
    printf("%ld\n",factreq(n));
    return 0;
}