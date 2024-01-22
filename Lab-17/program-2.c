#include<stdio.h>

void main(){
    int vint,*i;
    float vfloat,*f;
    char vchar,*c;
    double vdouble,*d;

    printf("Enter a value of integer=");
    scanf("%d",&vint);
    printf("\nEnter a value of float=");
    scanf("%f",&vfloat);
    printf("\nEnter a character=");
    scanf(" %c",&vchar);
    printf("\nEnter a value of double=");
    scanf("%lf",&vdouble);

    printf("\n\n");

    i=&vint;
    f=&vfloat;
    c=&vchar;
    d=&vdouble;

    printf("\nAddress of integer=%d",i);
    printf("\nValue of integer=%d",*i);
    printf("\n");

    printf("\nAddress of float=%d",f);
    printf("\nValue of float=%f",*f);
    printf("\n");
    
    printf("\nAddress of character=%d",c);
    printf("\nValue of character=%c",*c);
    printf("\n");

    printf("\nAddress of double=%d",d);
    printf("\nValue of double=%lf",*d);
    printf("\n");

    printf("\nThank you.");
    return;
}