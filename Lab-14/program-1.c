#include<stdio.h>

void main(){
    int i,n;
    printf("Enter a value of n:");
    scanf("%d",&n);
    int num[n];

    for(i=0;i<n;i++){
        printf("\nnum%d=",i);
        scanf("%d",&num[i]);
    }
    printf("\n");
    printf("reverse order:-");

    for(i=(n-1);i>=0;i--){
        printf("\nnum%d= %d",i,num[i]);
    }
    return;
}