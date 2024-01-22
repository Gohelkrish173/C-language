#include<stdio.h>

void main(){
    int i=1,n,check=0;
    printf("enter a value of n:");
    scanf("%d",&n);

    while(i<=n){
        if(n%i==0){
            check=check+1;
        }
        i++;
    }
    if(check==2){
        printf("Given no. is prime.");
    }
    else{
        printf("Given no. is non-prime.");
    }
    return;
}