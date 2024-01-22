#include<stdio.h>

void main(){
    float p,r,n,interest;
    printf("enter a value of p,r,n:");
    scanf("%f %f %f",&p,&r,&n);
    interest=(p*r*n)/100;
    printf("%f",interest);
    return;
}