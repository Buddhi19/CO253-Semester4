#include <stdio.h>

int maximum(int a,int b){
    int ans=a>b ? a:b;
    return ans;
}

int main(){

    int a=1110;
    int b=256;

    printf("%d\n",maximum(a,b));

    return 0;
}