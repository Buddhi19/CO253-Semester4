#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[10];
    scanf("%[^\n]s",string);
    // name id_number 
    char* name;
    name=strtok(string," ");
    printf("%s\n",name);
    char* id;
    id=strtok(NULL," ");
    printf("%s\n",id);

    int integer=atoi(id);
    printf("%s th id is %d\n",name,integer);

    return 0;
}