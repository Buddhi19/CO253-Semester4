#include <stdio.h>
#include <stdlib.h>

//this is 1 knapsack problem
//but we can solve using two pointer method as maximum of two bags can be carried at once..
int number_of_trips(float* weights, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(weights[i]>weights[j]){
                float temp=weights[i];
                weights[i]=weights[j];
                weights[j]=temp;
            }
        }
    }
    int pointer_1=0;
    int pointer_2=n-1;
    int ans=0;
    while (pointer_1<=pointer_2){
        if (pointer_1==pointer_2){
            ans+=1;
            return ans;
        }
        if (weights[pointer_1]+weights[pointer_2]<=3.0){
            ans+=1;
            pointer_1+=1;
            pointer_2-=1;

        }
        else{
            ans+=1;
            pointer_2--;
        }
    }
    return ans;
}


int main(){
    int n;
    scanf("%d",&n);
    float* weight=malloc(n*sizeof(float));
    for(int i=0;i<n;i++){
        scanf("%f",weight+i);
    }
    int ans=number_of_trips(weight,n);
    printf("%d\n",ans);
    return 0;
}
