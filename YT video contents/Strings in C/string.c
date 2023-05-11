#include <stdio.h>
#include <string.h>

int main(){

    char string[30];

    scanf("%[^\n]s",string);

    int length=strlen(string);
    printf("%d\n",length);
    printf("%s\n",string);

    return 0;
}