#include<stdio.h>

void main(){
    int i,j,n,k;
    printf("Enter a value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(k=n-i;k>0;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return;
}