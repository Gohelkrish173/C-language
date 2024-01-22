#include<stdio.h>
float max(float,float,float);

void main(){
    float a,b,c,maximum;
    printf("a:");
    scanf("%f",&a);
    printf("\n");
    printf("b:");
    scanf("%f",&b);
    printf("\n");
    printf("c:");
    scanf("%f",&c);
    printf("\n");

    maximum=max(a,b,c);
    printf("maximum floating number=%f",maximum);
    return;
}

float max(float m,float n,float o){
    if(m>n && m>o){
        return m;
    }
    else if(n>m && n>o){
        return n;
    }
    else if(o>m && o>n){
        return o;
    }
}