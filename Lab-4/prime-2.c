#include<stdio.h>

void main(){
    int n,i=2,check=0;
    printf("Enter a value of n:");
    scanf("%d",&n);

    while(i<=n/2){
        if(n%i==0){
        check=1;
        break;
        }
        i++;
    }
    if(check==0){
        printf("given no. is prime.");
    }
    else{
        printf("given no. is non-prime.");
    }
    return;
}