#include<stdio.h>

void main(){
    float a,b,sum,subtraction,multiply;
    float divide;
    char decision;
    printf("Enter a value of a,b:");
    scanf("%f %f",&a,&b);
    printf("Enter a Decision:");
    scanf(" %c",&decision);

    switch(decision){
        case '+': sum=a+b;
            printf("sum=%f",sum);
            break;
        case '-': subtraction=a-b;
            printf("subtraction=%f",subtraction);
            break;
        case '*': multiply=a*b;
            printf("multiply=%f",multiply);
            break;
        case '/': divide=a/b;
            printf("divide=%f",divide);
            break;

        default: printf("No Valid Input");
    }
    return;
}