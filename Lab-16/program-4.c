#include<stdio.h>

void main(){
    int i,j,n;
    printf("n:");
    scanf("%d",&n);
    int matA[n][n];
    int matB[n][n];
    

    printf("matA:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("matb:-\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matB[i][j]);
        }
        printf("\n");
    }
    int sum[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum[i][j]=matA[i][j]+matB[i][j];
        }
    }
    printf("sum of Matrix is c:-\n\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return;
}