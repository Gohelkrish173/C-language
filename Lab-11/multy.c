#include<stdio.h>

void main(){
    int i,n;
    printf("Enter a value of n1:");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d*%d=%d",n,i,(n*i));
        printf("\n");
    }
    printf("\n");
    n=0;
    printf("n2:");
    scanf("%d",&n);
    
    for(i=1;i<=10;i++){
        printf("%d*%d=%d",n,i,(n*i));
        printf("\n");
    }
    printf("\n");
    n=0;
    printf("n3:");
    scanf("%d",&n);

    for(i=1;i<=10;i++){
        printf("%d*%d=%d",n,i,(n*i));
        printf("\n");
    }
    printf("\n");
    printf("Thank You...");
    return;
}