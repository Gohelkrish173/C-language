#include<stdio.h>

void main(){
    int i,n,rem;
    printf("Enter a value of n:");
    scanf("%d",&n);

    printf("digit:");
    while(n>0){
        rem=n%10;
        printf("\n%d",rem);
        n=n/10;
        i++;
    }
    return;
}