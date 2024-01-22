#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter a value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    (a>b)? (c=c*a) : (c=c*b);
    printf("c=%d",c);
    return;
}