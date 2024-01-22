#include<stdio.h>

void main(){
    int i,n,count=0;
    printf("n:");
    scanf("%d",&n);
    int num[n];

    for(i=0;i<n;i++){
        printf("A%d= ",i);
        scanf("%d",&num[i]);
    }
    
    printf("\n");
    printf("Negative numbers is= ");

    for(i=0;i<n;i++){
        if(num[i]<0){
            count=count+1;
            printf("%d,",num[i]);
        }
    }printf("\b \b");
    printf("\n");
    printf("\ntotal negative numbers is= %d",count);
    return;
}