#include<stdio.h>

void main(){
    int i,j,k,l,n,m,o=2;
    printf("Enter a value of n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=((2*i)-1) ; j++){
            if(j==1 || j==((2*i)-1) || i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(k=1;k<n;k++){
        m=((n*2)-1);
        for(l=1;l<(m);l++){
            if(l==o || l==(m-k)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        o=o+1;
        printf("\n");
    }
    return;
}