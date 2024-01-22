#include<stdio.h>

void main(){
    int i=1,n,count=0;
    printf("Enter a value of n:");
    scanf("%d",&n);

    while(i<n){
        if(n%i==0){
            count=count+1;
        }
        i++;
    }
    if(count<2){
        printf("given no. is even.");
    }
    else{
        printf("given no. is odd.");
    }
    return;
}