#include <stdio.h>
#include <string.h>

int main(){

    char name1[25]="HELLO ";
    char name2[25]="WORLD";
    strcat(name1,name2);

    printf("%s\n",name1);

    return 0;
}