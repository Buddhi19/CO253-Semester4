#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array1[5];
    for(int i=0;i<5;i++){
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d, ",*(array1+i));
    }
    printf("\n");

    int* array2=malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        scanf("%d",array2+i);
    }
    for(int i=0;i<5;i++){
        printf("%d, ",*(array2+i));
    }
    printf("\n");
    return 0;
}