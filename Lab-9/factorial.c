#include<stdio.h>

void main(){
    int i=1,n,fact=1;
    printf("Enter a factorial number=");
    scanf("%d",&n);

    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("\nvalue of %d!= %d",n,fact);
    return;
}