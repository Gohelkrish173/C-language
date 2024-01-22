#include<stdio.h>

void main(){
    int i=2,n,flag=0;
    printf("Enter a value of n:");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            flag=1;
        }
        i++;
    }
    if(flag==0){
        printf("given value is prime.");
    }
    else{
        printf("given value is non-prime.");
    }
    return;
}