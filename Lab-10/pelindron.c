#include<stdio.h>

void main(){
    int rem,n,s1,s2=0;
    printf("Enter a value of n:");
    scanf("%d",&n);

    rem=n;
    while(n!=0){

        s1=n%10;
        s2=(s2*10)+s1;
        n=n/10;
    }
    if(s2==rem){
        printf("given no. is pelindrone.");
    }
    else{
        printf("given no. is non pelindrone.");
    }
    return;
}