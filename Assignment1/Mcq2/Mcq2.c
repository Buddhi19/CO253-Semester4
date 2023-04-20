#include <stdio.h>

int max1(int a,int b){
    int max;
    if(a>b){
        max= a;
    }
    else{
        max=b;
    }
    return max;

}

int max2(int a,int b){
    int max = a > b ? a:b;
    return max;
}

int max3(int a,int b){
    int max= a<b ? b:a;
    return max;
}

int max4(int a,int b){
    int max= a<b ? a:b;
    return max;
}




int main(){
    int max,a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d %d %d\n",max1(a,b),max2(a,b),max3(a,b),max4(a,b));
    
    return 0;
}