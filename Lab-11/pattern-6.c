#include<stdio.h>

void main(){
    int i,j;

    for(i=65;i<=91;i++){
        for(j=65;j<=i;j++){
            printf(" %c",j);
        }
        printf("\n");
    }
    return;
}