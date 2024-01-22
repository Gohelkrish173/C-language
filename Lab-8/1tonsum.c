#include<stdio.h>

void main(){
    int n,i=1,sum=0;
    printf("Entre a value of n:");
    scanf("%d",&n);

    while(i>=1){
        if(i<=n){
        sum=sum+i;
        }
        i++;
    }
    printf("sum=%d",sum);
    return;    
}