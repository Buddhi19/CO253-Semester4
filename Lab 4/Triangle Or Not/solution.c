#include <stdio.h>
#include <stdlib.h>


//assumption both two arrays have same size, if not check for index...
void triangle_or_not(int n,int* triangle_1,int* triangle_2,int* triangle_3){

    for (int i=0;i<n;i++){
        int check=0;
        if (triangle_1[i]<triangle_2[i]+triangle_3[i]){
            check+=1;
        }
        if (triangle_2[i]<triangle_1[i]+triangle_3[i]){
            check+=1;
        }
        if (triangle_3[i]<triangle_1[i]+triangle_2[i]){
            check+=1;
        }
        if (check==3){
            printf("YES\n");
        }
        if (check!=3){
            printf("NO\n");
        }
    }    

}

int main(){
    int n;
    scanf("%d",&n);
    int* triangle_1 = malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",(triangle_1+i));
    }
    int k;
    scanf("%d",&k);
    int* triangle_2=malloc(k*sizeof(int));
    for (int i=0;i<k;i++){
        scanf("%d",(triangle_2+i));
    }
    int h;
    scanf("%d",&h);
    int* triangle_3=malloc(h*sizeof(int));
    for (int i=0;i<h;i++){
        scanf("%d",(triangle_3+i));
    }
    triangle_or_not(n,triangle_1,triangle_2,triangle_3);
    return 0;
}