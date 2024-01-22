#include<stdio.h>

void main(){
    int i,j,n;
    printf("Enter a value of N:");
    scanf("%d",&n);

    for(i=5;i>0;i--){
        for(j=5;j>=n+1-i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return;
}