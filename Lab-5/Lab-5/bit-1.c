#include<stdio.h>

void main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

    if((n & 1)==0){
        printf("given no. is even.");
    }
    else{
        printf("given no. is odd.");
    }
    return;
}