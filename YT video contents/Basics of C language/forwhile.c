#include <stdio.h>

int main(){
    int i=0;
    while (1){
        printf("%d Hello world\n",i);
        i+=1;
        if(i>=100){
            break;
        }
    }

    return 0;
}