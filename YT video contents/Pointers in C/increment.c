////////////// pass by reference functions //////////
#include <stdio.h>

void increment(int *pointer){
    *pointer+=1;
}


int main(){
    int a=4;
    int *pointer_a=&a;
    increment(pointer_a);
    printf("%d\n",a);
    return 0;
}