#include<stdio.h>
int find_no_ofdigit(int);

int main(){
    int n,sum;
    printf("Enter a value of n:");
    scanf("%d",&n);
    sum=find_no_ofdigit(n);
    printf("sum=%d",sum);
    return 0;
}

int find_no_ofdigit(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10+find_no_ofdigit(n/10);
    }
}