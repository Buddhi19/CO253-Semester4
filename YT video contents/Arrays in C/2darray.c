#include <stdio.h>

int main(){
    // int array2d[3][2]={{1,2},{2,3},{4,10}};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<2;j++){
    //         printf("%d\n",array2d[i][j]);
    //     }
    // }
    char stringarray[4][10]={{"abcd"},{"bnjk"},{"wert"},{"tyik"}};
    for (int i=0;i<4;i++){
        printf("%s\n",stringarray[i]);
    }
    return 0;
}