#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        char s1[]=" ";
        char s2[]="* ";

        for (int k=0;k<(n-i)+1;k++){
            printf("%s",s1);
        }
        for (int k=0;k<i+1;k++){
            printf("%s",s2);
        }
        printf("\n");



    }

    return 0;
}