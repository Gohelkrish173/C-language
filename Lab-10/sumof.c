#include<stdio.h>

void main(){
    int n,sum=0,first,last,rem;
    printf("Enter a value of n:");
    scanf("%d",&n);
    
    rem=n%10;
    last=rem;
    while(n>0){
        rem=n%10;
        n=n/10;
    }
    first=rem;

    printf("first rem= %d",first);    
    printf("\nlast rem= %d",last);
    sum= last + first;

    printf("\nsum of last digit and first digit: %d",sum);
    return;
}