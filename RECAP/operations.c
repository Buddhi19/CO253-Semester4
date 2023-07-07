#include <stdio.h>


int leftshift(int i, int j)
{
    int k=(i<<j);
    return k;
}


int main()
{
    int num;
    scanf("%d",&num);
    printf("%.2f\n",(float)num);

    int i,j;
    scanf("%d %d",&i,&j);
    printf("%d\n",leftshift(i,j));
    return 0;
}