////////////////////////  POINTERS ///////////////////////////

// A pointer is a variable that stores the memory address of another variable as its value.

#include <stdio.h>

int main(){
    int a=2;
    int *pointer=&a;
    // *pointer--> variable (a=2)
    // pointer --> memory location &a
    a=4;
    printf("%d\n",*pointer);
    
    return 0;
}