#include <stdio.h>

double divide(int x,int y){
    double ans=(double)x/y;   //convert integer divison to normal division
    return ans;
}



int main(){

    int a=3;
    int b=8;

    double solution=divide(a,b);
    printf("%.2lf\n",solution); //round 

    return 0;
}