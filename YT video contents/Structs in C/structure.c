#include <stdio.h>
#include <math.h>

typedef struct{
    double x;
    double y;
}point;
point incrementbyone(point anypoint){
    point ans;
    ans.x=anypoint.x+1;
    ans.y=anypoint.y+1;
    return ans;
}
double distane(point anypoint1,point anypoint2){
    double ans;
    ans=pow((anypoint1.x-anypoint2.x),2)+pow((anypoint1.y-anypoint2.y),2);
    ans=pow(ans,0.5);
    return ans;
}
int main(){

    point anypoint1;
    scanf("%lf %lf",&anypoint1.x,&anypoint1.y);
    point anypoint2;
    scanf("%lf %lf",&anypoint2.x,&anypoint2.y);

    double solution;
    solution= distane(anypoint1,anypoint2);
    printf("distance between two points is %.3f\n",solution);
    return 0;
}