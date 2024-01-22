#include<stdio.h>

void main(){
    int n,a,sum=0,avg=1,i=1;
    printf("accepted numbers=");
    scanf("%d",&n);

    while(i<=n){
        printf("\n num-%d= ",i);
        scanf("%d",&a);
        sum=sum+a;
        i++;
    }
    printf("sum= %d",sum);
    avg=sum/n;
    printf("\navg= %f",(float)(avg));
    return;
}