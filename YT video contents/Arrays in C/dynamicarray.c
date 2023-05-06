#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int* dynamicarray=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",dynamicarray+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(dynamicarray+i));
    }
    free(dynamicarray);
    return 0;
}