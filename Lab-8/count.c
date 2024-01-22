#include<stdio.h>

void main(){
    int n,co=0,ce=0,i=1;
    printf("Entre a value of n:");
    scanf("%d",&n);

    while(i<=n){
        if(i%2==0){
            ce=ce+1;
        }
        else{
            co=co+1;
        }
        i++;
    }
    printf("count even no.=%d",ce);
    printf("\ncount odd no.=%d",co);
    return;
}