#include <stdio.h>
#include <math.h>

int bintodec(char binary[]){
    int dec=0;
    int power=0;
    int i=0;
    while (binary[i]!='\0'){
        i++;
    }
    for(int k=i;i>=0;i--){
        if(binary[i]=='0'){
            power++;
        }
        if(binary[i]=='1'){
            dec+=pow(2,power);
            power++;
        }
    }
    return dec;
}




int main(){
    char binary[100];
    scanf("%s",binary);
    printf("%d\n",bintodec(binary));
    return 0;
}