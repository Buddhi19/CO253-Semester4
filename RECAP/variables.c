#include <stdio.h>

int main()
{
    char name[10];
    int number;
    double GPA;
    scanf("%s %d %lf",name,&number,&GPA);
    printf("HI %s - %d, your GPA is -%.2lf\n",name,number,GPA);
    return 0;
}