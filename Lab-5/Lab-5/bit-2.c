#include<stdio.h>

void main(){
    int a,b;
    char decision;
    printf("Enter a number of A:");
    scanf("%d",&a);

    printf("Enter a decision:");
    scanf(" %c",&decision);

    if(decision=='*'){
        b=a<<1;
        printf("%d",b);
    }
    else if(decision=='/'){
        b=a>>1;
        printf("%d",b);
    }
    return;
}