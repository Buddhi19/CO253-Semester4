#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char* s=calloc(1,sizeof(char));
    char character;
    while (scanf("%c",&character)==1){
        if(character== '\n'){
            break;
        }
        int len=strlen(s);
        s=realloc(s,len+1);
        *(s+len)=character;
        *(s+len+1)='\0';

    }
    printf("%s\n",s);

    int len=strlen(s);
    for (int i=0;i<len;i+=2){
        printf("%c",s[i]);
    }
    printf(" ");
    for (int i=1;i<len;i+=2){
        printf("%c",s[i]);
    }
    free(s);
    

    return 0;
}