#include<stdio.h>

void main(){
    int a,b,*temp;
    printf("Enter a:");
    scanf("%d",&a);
    printf("\nEnter b:");
    scanf("%d",&b);

    printf("\n\n");
    printf("swap a and b");
    printf("\n\n");

    temp=&a;

    printf("a=%d",b);
    printf("\nb=%d",*temp);
    
    return;
}