#include <stdio.h>
#include <stdlib.h>


int index_to_start(int* magic,int* distances,int n){
    int start=0;
    while (start<n){
        // printf("out loop checking = %d\n",start);
        int current=start;
        int storage=0;
        int looped=0;
        while (1){
            // printf("inside loop checking = %d\n",current);
            if (looped==1 && current==start){
                return start;
            }
            storage+=magic[current];
            if (current<n-1){
                if(storage>=distances[current]){
                    storage-=distances[current];
                    current+=1;
                    continue;
                }
                else{
                    break;
                }
            }
            if (current==n-1){
                if(storage>=distances[current]){
                    storage-=distances[current];
                    current=0;
                    looped=1;
                    continue;
                }
                else{
                    break;
                }
            }

        }
        start++;
    }
    return -1;

}

int main(){
    //reading inputs
    int n;
    scanf("%d",&n);
    int* magic=malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&magic[i]);
    }
    scanf("%d",&n);
    int* distances=malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&distances[i]);
    }
    int ans=index_to_start(magic,distances,n);
    printf("%d\n",ans);
    return 0;
}