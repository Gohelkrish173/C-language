#include<stdio.h>

void main(){
    int i,n,countodd=0,counteven=0;
    printf("Enter a value of n:");
    scanf("%d",&n);
    int num[n];

    for(i=0;i<n;i++){
        printf("num%d=",i);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        if(num[i]%2==0){
            counteven=counteven+1;
        }
        else{
            countodd=countodd+1;
        }
    }
    printf("\n");
    printf("no. of even numbers= %d",counteven);
    printf("\nno. of odd numbers= %d",countodd);
    return;
}