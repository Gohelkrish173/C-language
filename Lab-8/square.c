#include<stdio.h>
#include<math.h>

void main(){
    int i=1,n,sum=0,squarex;
    while(i<=10){
        squarex=i*i;
        printf("\n square(%d)= %d",i,squarex);
        sum=sum+squarex;
    i++;
    }
    printf("\n sum to square of 1 ot 10 numbers.=%d",sum);

    printf("\n Entre a value of n:");
    scanf("%d",&n);

    i=1; sum=0;
    while(i<=n){
        squarex=i*i;
        printf("\n square(%d)= %d",i,squarex);
        sum=sum+squarex;
    i++;
    }
    printf("\nsum to square of 1 ot n numbers.=%d",sum);
    return;
}