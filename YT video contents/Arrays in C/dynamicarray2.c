#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n;
    scanf("%d",&n);
    int* dynamicarray=calloc(n,sizeof(int));  //calloc initialize values for 0
    for(int i=0;i<n;i++){
        scanf("%d",dynamicarray+i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(dynamicarray+i));
    }
    free(dynamicarray);
    return 0;
}