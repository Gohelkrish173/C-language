#include<stdio.h>

void main(){
    int i=0,n,table;
    printf("\nEnter a number of  multiplication table=");
    scanf("%d",&n);
    printf("\nmultiplication table of %d.",n);

    while(i<=10){
        table=n*i;
        printf("\n %d*%d=%d",n,i,table);
        i++;
    }
    return;
}
