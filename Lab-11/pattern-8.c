#include<stdio.h>

void main(){
    int i,j,n,x=1;
    printf("Enter a value of N:");
    scanf("%d",&n);

    for(i=5;i>0;i--){
        for(j=5;j>=i;j--){
            printf("%d ",x);
            x=x+1;
        }
        printf("\n");
    }
    return;
}