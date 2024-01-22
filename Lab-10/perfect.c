#include<stdio.h>

void main(){
    int i=1,n,sum=0;
    printf("Enter a value of n:");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    printf("sum= %d",sum);
    if(sum==n){
        printf("given no. is perfect.");
    }
    else{
        printf("given no. is non-perfect.");
    }
    return;
}