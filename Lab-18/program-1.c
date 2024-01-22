#include<stdio.h>
int sum(int,int);
void main(){
    int a,b,c;
    printf("Enter a value of a:");
    scanf("%d",&a);
    printf("\n");
    printf("Enter a value of b:");
    scanf("%d",&b);
    printf("\n");

    c=sum(a,b);
    printf("sum= %d.",c);
    return;
}

int sum(int m,int n){
    return (m+n); 
}