#include<stdio.h>

void main(){
    int a,*p;
    printf("a=");
    scanf("%d",&a);

    p=&a;
    printf("*p=%d\n",*p);
    printf("p=%d\n",p);
    printf("address of p=%d\n",&p);
    printf("address of a=%d\n",&a);
    return;
}