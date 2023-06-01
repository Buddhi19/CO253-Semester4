#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char keyboard[9];

int difference(char val1,char val2)
{
    int row1=0;
    int col1;
    for(int i=0;i<9;i++){
        if(val1==keyboard[i]){
            row1=i/3;
            col1=i%3;
            break;
        }
    }

    int row2=0;
    int col2;
    for(int i=0;i<9;i++){
        if(val2==keyboard[i]){
            row2=i/3;
            col2=i%3;
            break;
        }
    }
    // printf("%d %d\n",row1,col1);
    // printf("%d %d\n",row2,col2);

    if(col1==col2 && row1==row2){
        return 0;
    }
    if(row1==row2){
        if(col1==col2-1 || col1==col2+1){
            return 1;
        }
    }
    if(row1==row2-1){
        if(col1==col2-1 || col1==col2+1 || col1==col2){
            return 1;
        }
    }
    if(row1==row2+1){
        if(col1==col2-1 || col1==col2+1 || col1==col2){
            return 1;
        }
    }

    return 2;
}



int seconds(char* code)
{
    int time=0;
    for(int i=0;i<strlen(code)-1;i++){
        time+=difference(code[i],code[i+1]);
    }
    return time;
}

int main()
{
    char code[30];
    scanf("%s",code);
    scanf("%s",keyboard);

    printf("%d\n",seconds(code));
    

    return 0;
}