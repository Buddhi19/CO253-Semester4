#include <stdio.h>



int steps(char A,char B,char C,int k)
{
    if(k==0){
        return 0;
    }
    steps(A,C,B,k-1);
    printf("Move from %c to %c\n",A,C);
    steps(B,A,C,k-1);

}



int main()
{
    printf("%d",steps('A','B','C',5));
    return 0;
}