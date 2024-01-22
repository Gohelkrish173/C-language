#include<stdio.h>

void main(){
    int x,y,value=1,i=1;
    printf("Enter a value of x,y:");
    scanf("%d %d",&x,&y);
    
    while(i<=y){
        value=value*x;
        i++;
    }
    printf("\n %d^%d= %d",x,y,value);
    return;
}