#include<stdio.h>

void main(){
    int lower,uper,i=97;
    printf("Lower case alphabet:");
    while(i<124){
        lower=i;
        printf(" %c ",(char)(lower));
        i++;
    }
    i=65;
    printf("\nUper case alphabet:");
    while(i<91){
        uper=i;
        printf(" %c ",(char)(uper));
        i++;
    }
    return;
}