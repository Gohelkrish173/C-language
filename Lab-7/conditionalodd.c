#include<stdio.h>

void main(){
    int n;
    printf("Enter a given number:");
    scanf("%d",&n);

    (n%2==0)? printf("Given number is even."):printf("Given number is odd.");
    return;
}