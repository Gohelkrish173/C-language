#include<stdio.h>

void main(){
    int i,n;
    printf("n:");
    scanf("%d",&n);
    int first[n];
    int second[n];
    printf("\n");

    for(i=0;i<n;i++){
        printf("a%d= ",i);
        scanf("%d",&first[i]);
    }
    printf("\n");
    printf("Copied values :-");
    printf("\n");

    for(i=0;i<n;i++){
        second[i]=first[i];
        printf("\nb%d= %d",i,second[i]);
    }
    return;
}