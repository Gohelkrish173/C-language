#include<stdio.h>

void main(){
    int n,number;
    printf("Enter A Value Of number:");
    scanf("%d",&n);
    number=n%10;

    if(number%2==0){
        printf("last number is even.");
    }
    else{
        printf("last number is odd.");
    }
    return;
}