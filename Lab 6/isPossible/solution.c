#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPossible(int a,int b,int c,int d){
    if(a==c && b==d){
        return true;
    }
    if(a>c || b>d){
        return false;
    }
    if(a<=c && b<=d){
        if(isPossible(a+b,b,c,d)||isPossible(a,a+b,c,d)){
            return true;
        }
    }
    return false;
}
// My recursive solution.
// if a,b has reached c,d this returns true
//  once one of them is higher than c or d it will return false as it has passed the point
//  if both a and b are less than c and d i increse a to a+b and check for reachbility on the other hand ill increase b to a+b and check the reachability


int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        scanf("%d",arr+i);
    }
    if(isPossible(arr[0],arr[1],arr[2],arr[3])){
        printf("Yes\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}