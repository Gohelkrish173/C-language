#include<stdio.h>
int max(int,int);
int min(int,int);

int main(){
    int a,b,maximum,minimum;
    printf("a:");
    scanf("%d",&a);
    printf("\nb:");
    scanf("%d",&b);

    maximum=max(a,b);
    minimum=min(a,b);
    printf("maximum value=%d",maximum);
    printf("\nminimum value=%d",minimum);
    return 0;
}

int max(int m,int n){
    if(m>n){
        return m;
    }
    else{
        return n;
    }
}
int min(int m,int n){
    if(m>n){
        return n;
    }
    else{
        return m;
    }
}