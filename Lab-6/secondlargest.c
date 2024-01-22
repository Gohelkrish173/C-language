#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter A value of a:");
    scanf("%d",&a);
    printf("Enter A value of b:");
    scanf("%d",&b);
    printf("Enter A value of c:");
    scanf("%d",&c);

    if(a>b && a>c){
        if(b>c){
            printf("Second largest number is: %d",b);
        }
        else{
            printf("Second largest number is: %d",c);
        }
    }
    if(b>a && b>c){
        if(a>c){
            printf("Second largest number is: %d",a);
        }
        else{
            printf("Second largest number is: %d",c);
        }
    }
    if(c>a && c>b){
        if(a>b){
            printf("Second largest number is: %d",a);
        }
        else{
            printf("Second largest number is: %d",b);
        }
    }
    return;
}