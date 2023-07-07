#include <stdio.h>

//! Sentinal Controlled Loops

int main()
{
    int Sentinal=-1;
    int num;
    int count=0;
    scanf("%d",&num);
    while(num!=Sentinal){
        count++;
        scanf("%d",&num);
    }
    printf("%d\n",count);
    return 0;

}