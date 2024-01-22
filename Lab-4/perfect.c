#include<stdio.h>

void main(){
    int n,i=1,sum=0;
    printf("Enter a value of n:");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            printf("%d+",i);
            sum=sum+i;
        }
        i=i+1;
    }
    printf("=%d",sum);
    if(sum==n){
        printf("\ngiven no. is perfect.");
        }
        else{
        printf("\ngiven no. is non-perfect.");
        }
    return;
}