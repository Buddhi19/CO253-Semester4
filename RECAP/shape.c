#include <stdio.h>

void row(){
    for (int i=0;i<7;i++){
        printf("#");
    }
    printf("\n");
}


int main()
{
    for (int i=0;i<8;i++){
        if(i==0 || i==7){
        row();
        }
        else{
            for(int j=0;j<i;j++)
            printf(" ");
            printf("#\n");
        }
    }
    return 0;
}