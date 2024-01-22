#include<stdio.h>

void main(){
    int i,n,rem;
    printf("Enter a value of n:");
    scanf("%d",&n);

    printf("reverse:");
    while(n>0){
        rem=n%10;
        printf("%d",rem);
        n=n/10;
        i++;
    }
    return;
}