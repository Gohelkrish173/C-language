#include<stdio.h>

void main(){
    int n,i=1,factor;
    printf("Enter a value of n=");
    scanf("%d",&n);

    printf("Factor=");
    while(i<n){
        if(n%i==0){
            factor=i;
            printf(" %d",factor);
        }
        i++;
    }
    return;
}