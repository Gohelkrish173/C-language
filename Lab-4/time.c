#include<stdio.h>

void main(){
    int sec,h,m,s;
    printf("Entre a value of second:");
    scanf("%d",&sec);

    h=(sec)/3600;
    m=(sec-(h*3600))/60;
    s=(sec-(h*3600)-(m*60));
    printf("h=%d m=%d s=%d",h,m,s);
    return;
}