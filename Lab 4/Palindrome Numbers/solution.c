#include <stdio.h>
void check_palindrome(long number){
    if (number<0){
        printf("INVALID INPUT");
        return;
    }
    //reversing the number
    long n=number;
    long reversed=0;
    long remainder;
    while (n!=0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;

    }
    if (reversed==number){
        printf("YES");
    }
    else{
        printf("NO");
    }
}

int main() {
 long input;
 if(!scanf("%ld", &input)){
 printf("Error: Wrong input type");
 return 0;
 }
 check_palindrome(input);
 return 0;
}
