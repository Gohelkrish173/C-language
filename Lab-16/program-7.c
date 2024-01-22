#include<stdio.h>

void main(){
    int i,j,k,l,n;
    printf("enter a size of n:");
    scanf("%d",&n);

    int marks[n][n];
    printf("matrix-1\n\n");

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("marks[%d][%d]=",i,j);
            scanf("%d",&marks[i][j]);
            printf("\n");
        }
    }
    
    printf("\n");
    printf("matrix-2\n\n");
    
    for(k=0;k<n;k++){
        for(l=0;l<n;l++){
            printf("marks[%d][%d]=",k,l);
            scanf("%d",&marks[k][l]);
            printf("\n");
        }
    }
    printf("\n\n");

    for(j=0;j<n;j++){
        for()
    }
    return;
}