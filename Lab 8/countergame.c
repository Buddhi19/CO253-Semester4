#include <stdbool.h>

bool isPower(int n)
{
    if (n == 0)
        return false;
 
    return (ceil(log2(n)) == floor(log2(n)));
}

char* counterGame(int n) {

    int turn=0;
    while(true){
        if(n==1 || n==0){
            break;
        }
        else if(isPower(n)){
            n=n/2;
            turn++;
        }
        else{
            int m=log2(n);
            int below=pow(2,m);
            n-=below;
            turn++;
        }
    }
    if(turn%2==1){
        return ("Louise");
    }
    return ("Richard");

}
