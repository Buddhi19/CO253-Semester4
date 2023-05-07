#include <stdio.h>


double calc(double a,double b,char operator){

    switch(operator){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
    }
}

int main(){
    
    double a,b;
    char operator;

    scanf("%lf %c %lf",&a,&operator,&b);

    printf("your answer is - %lf\n",calc(a,b,operator));
    return 0;
}