#include<stdio.h>

void main(){
    int i,j;
    int s[5][2];
    
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            printf("s[%d][%d]= ",i,j);
            scanf("%d",&s[i][j]);
        }
    }
    printf("\nsequence roll no. mark:-\n\n");
    for(i=0;i<5;i++){
            printf("   s%d       ",i);
        for(j=0;j<2;j++){
            printf("%d      ",s[i][j]);
        }
        printf("\n");
    }
    return;   
}