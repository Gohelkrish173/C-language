#include<stdio.h>

void main(){
    int i,j,k,n;
    printf("Enter a value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2!=0){           
            for(j=1;j<=n-i;j++){
                printf(" ");
            }
            for(j=1;j<=i;j++){
                printf("%d ",j);
            }
        }
        else{
            for(j=1;j<=n-i;j++){
                printf(" ");
            }
                for(k=65;k<=(65+i-1);k++){
                    printf("%c ",k);
                }
            }
            printf("\n");
        }
    return;
}