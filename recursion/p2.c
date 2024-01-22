#include<stdio.h>
int find_no_ofdigit(int);

int main(){
    int n,digit;
    printf("Enter a value of n:");
    scanf("%d",&n);
    digit=find_no_ofdigit(n);
    printf("digit=%d",digit);
    return 0;
}

int find_no_ofdigit(int n){
    if(n==0){
        return 0;
    }
    else{
        return 1+find_no_ofdigit(n/10);
    }
}