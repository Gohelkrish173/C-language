#include<stdio.h>

void main(){
    int i=1,n,on;
    printf("\n(while) odd no.:");
    while(i<=10){
        if(i%2!=0){
            on=i;
            printf(" %d",on);
        }
        i++;
    }

    i=1;
    printf("\n(do while) odd no.:");
    do{
        if(i%2!=0){
            on=i;
            printf(" %d",on);
        }
        i++;
    }
    while(i<=10);

    i=1;
    printf("\n Enter a value of n:");
    scanf("%d",&n);
    printf("\n(while) odd no.:");
    while(i<=n){
        if(i%2!=0){
            on=i;
            printf(" %d",on);
        }
        i++;
    }

    i=1;
    printf("\n(do while) odd no.:");
    do{
        if(i%2!=0){
            on=i;
            printf(" %d",on);
        }
        i++;
    }
    while(i<=n);
    return;
}