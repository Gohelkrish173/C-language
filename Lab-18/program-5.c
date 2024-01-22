#include<stdio.h>
int swap(int *,int *);

void main(){
    int a,b,c;
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);

    swap(&a,&b);
    printf("\na=%d",a);
    printf("\nb=%d",b);
    return;
}

int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}