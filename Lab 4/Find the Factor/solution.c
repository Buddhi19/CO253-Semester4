#include <stdio.h>


int pth_factor(int n,int p){
    int factors=0;
    for (int i=1;i<n+1;i++){
        if (n%i==0){
            factors+=1;
        }
        if (factors==p){
            return i;
        }
    }
    return 0;
}

int main(){
    int n,p;
    scanf("%d%d",&n,&p);

    printf("%d\n",pth_factor(n,p));

    return 0;
}