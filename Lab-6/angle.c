#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter A Value Of side a:");
    scanf("%d",&a);
    printf("Enter A Value Of side b:");
    scanf("%d",&b);
    printf("Enter A Value Of side c:");
    scanf("%d",&c);

    if(a!=b && b!=c && c!=a){
        printf("Given triangle is Scalene.");
    }
    else if(a==b && a==c && b==c){
        printf("Given trianlge is Equilateral.");
    }
    else if(a==b || a==c){
        printf("Given triangle is Isosceles.");
    }
    return;
}