#include<stdio.h>

void main(){
    int i,j,n,cp=0,cn=0;
    printf("n:");
    scanf("%d",&n);
    int mat[n][n];

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("mat[%d][%d]= ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j]>0){
                cp=cp+1;
            }
            else if(mat[i][j]<0){
                cn=cn+1;
            }
        }
    }
    printf("negative numbers in matrix A= %d",cn);
    printf("\npositive numbers in matrix A= %d",cp);
    return;
}