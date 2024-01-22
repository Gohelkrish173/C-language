#include<stdio.h>

void main(){
    int i,n,j,c,k;
    printf("n= ");
    scanf("%d",&n);
    int num[n];

    for(i=0;i<n;i++){
        printf("A%d= ",i);
        scanf("%d",&num[i]);
    }
    printf("Find A value:");
    scanf("%d",&j);
    k=0;
    for(i=0;i<n;i++){
        if(j==num[i]){
            c=i;
            k++;
        }
    }
    if(k==0){
    printf("no valid input.\n");
    }
    else{
    printf("\nIndex of finding value= A%d",c);
    }
    return;
}