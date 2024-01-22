#include<stdio.h>
float rest(int,float,int);

void main(){
    int p,n;
    float r,interest;

    printf("p:");
    scanf("%d",&p);
    printf("\n");
    printf("r:");
    scanf("%f",&r);
    printf("\n");
    printf("n:");
    scanf("%d",&n);
    printf("\n");

    interest=rest(p,r,n);
    printf("interest=%f",interest);
    return;
}

float rest(int m,float n,int o){
    float c;
    c=(m*n*o)/100;
    return c;
}