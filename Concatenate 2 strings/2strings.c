#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char name1[25]="Hello ";
    char name2[25]="World";

    char *pointer1=name1;
    char *pointer2=name2;

    int i=0;
    while(name1[i]!='\0'){
        pointer1++;
        i++;
    }
    int j=0;
    while(name2[j]!='\0'){
        *pointer1=*pointer2;
        pointer1++;
        pointer2++;
        j++;
    }
    printf("%s\n",name1);

    return 0;
}