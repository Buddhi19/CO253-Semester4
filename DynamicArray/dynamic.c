#include <stdio.h>
#include <stdlib.h>


int main(){

    int n;
    scanf("%d",&n);
    int *arr=calloc(n,sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }

    for (int i=0;i<n;i++){
        printf("%d\n",*(arr+i));
    }
    arr=realloc(arr,(n-1)*sizeof(int));

    for (int i=0;i<n-1;i++){
        printf("%d ",*(arr+i));
    }
    free(arr);

    
    return 0;
}