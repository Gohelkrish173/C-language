#include<stdio.h>

void main(){
    int a,b,i=0;
    printf("Enter a value of a,b:");
    scanf("%d %d",&a,&b);
    
    while(i>=0){
        if(i>=a && i<=b){
            if(i%2==0){
            printf(" %d",i);
            }
        }
        i++;
    }
    return;
}