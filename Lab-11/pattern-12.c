#include<stdio.h>

void main(){
    int i,j,n,a;
    printf("Enter a value of n:");
    scanf("%d",&n);
    a=1;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || j==1){
                printf(" %c",a);
            }
            else if(i==n || j==n){
                printf(" %c",a);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return;
}