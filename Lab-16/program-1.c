#include<stdio.h>

void main(){
    int i,j,n;
    printf("n:");
    scanf("%d",&n);
    int mat[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("mat[%d][%d]= ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Matrix A:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return;
}