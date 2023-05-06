#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char c;
    scanf("%c",&c);
    if(isalpha(c)){
        printf("%c is a letter\n",c);
    }
    else{
        printf("%c is not a letter\n",c);
    }
    return 0;
}