#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    if(a%3==0){
        printf("%d is divisible by 3\n",a);
    }
    else if(a%3==1){
        printf("Remainder is 1\n");
    }
    else{
        printf("%d is not divisible by 3\n",a);
    }

    return 0;
}