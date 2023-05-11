#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

    char sentence[50];
    scanf("%[^\n]s",sentence);

    int n=strlen(sentence);

    for(int i=0;i<n;i++){
        if(isupper(sentence[i])){
            char new=tolower(sentence[i]);
            printf("%c",new);
        }   //---->character=sentence[i]
        if (islower(sentence[i])){
            char new=toupper(sentence[i]);
            printf("%c",new);
        }
        if(isspace(sentence[i])){
            printf("%c",sentence[i]);
        }
    }
    printf("\n");


    return 0;
}