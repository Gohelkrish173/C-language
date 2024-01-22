#include<stdio.h>

void main(){
    int i,n,div3,count=0;
    printf("n= ");
    scanf("%d",&n);
    int num[n];

    for(i=0;i<n;i++){
        printf("A%d= ",i);
        scanf("%d",&num[i]);
    }
    printf("that numbers which divide by 3 is= ");
    for(i=0;i<n;i++){
        if(num[i]%3==0){
            count=count+1;
            printf("%d,",num[i]);
        }
    }
    printf("\b \b");
    printf("\nnumbers divide by 3 is= %d.",count);
    return;
}