#include<stdio.h>

void main(){
    int i,n,countposi=0,countnegi=0;
    printf("Enter a value of n:");
    scanf("%d",&n);
    int num[n];

    for(i=0;i<n;i++){
        printf("num%d=",i);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        if(num[i]>0){
            countposi=countposi+1;
        }
        else{
            countnegi=countnegi+1;
        }
    }
    printf("\n");
    printf("no. of positive numbers= %d",countposi);
    printf("\nno. of negative numbers= %d",countnegi);
    return;
}