#include <stdio.h>

int main(){
    int a=1;
    int b=1;
    int x = 0;
    int y = 0;
    for (int i=0;i<5;i++){
        x += a++;
        y += ++b;
    }
    printf("%d %d %d %d\n",a,b,x,y);
    return 0;
}