#include<stdio.h>

void main(){
    int i=1,n;
    printf("\nEnter 1 to 10 numbers.(while):");
    while(i<=10){
        printf("%d ",i);
        i++;
    }
    i=1;
    printf("\nEnter 1 to 10 numbers.(do while):");
    do{
        printf("%d ",i);
        i++;
    }
    while(i<=10);
    
    i=1;
    printf("\nEnter a value of n:");
    scanf("%d ",&n);

    printf("\nEnter a value of 1 to n(while):");
    while(i<=n){
    printf("%d ",i);
    i++;
    }

    i=1;
        printf("\nEnter a value of 1 to n(do while):");
    do{
        printf("%d ",i);
        i++;
    }
    while(i<=n);
    return;
}