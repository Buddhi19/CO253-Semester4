
#include <stdio.h>

int main(){
    int x=1,y=2;
    int* ptr1=&x;
    int* ptr2=&y;
    int temp=*ptr1;
    *ptr1=*ptr2;
    printf("%d\n",x);
    return 0;
}