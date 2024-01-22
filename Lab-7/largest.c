#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter a value of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    (a>b && a>c)? printf("a is largest.") : ((b>c)? printf("b is largest."):printf("c is largest."));
    return;
}