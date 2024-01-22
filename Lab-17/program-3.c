#include<stdio.h>

void main(){
    int a,b,*m,*n;
    printf("Enter a value of a:");
    scanf("%d",&a);
    printf("\nEnter a value of b:");
    scanf("%d",&b);

    m=&a;
    n=&b;
    printf("\n");

    printf("sum=%d",(*m+*n));
    return;
}