#include<stdio.h>

void main(){
    int i=0,sum=0,n,se=0,so=0;
    printf("Enter a value of n:");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0){
            se=se+i;
        }
        else{
            so=so+i;
        }
        i++;
    }
    sum= so + (-se);
    printf("sum of given series 1-2+3-4+5....-n= %d",sum);
    return;
}