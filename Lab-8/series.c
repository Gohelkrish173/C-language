#include<stdio.h>
#include<math.h>

void main(){
    int t['n'],d=3,n,i=0;
    printf("Entre a value of value of that turm:");
    scanf("%d",&n);

    while(i<=n){
        if(i>0){
            t[1]=1;
          t[i]=t[1]+((i-1)*d);
          printf("\n t(%d)= %d",i,t[i]); 
        }
        i++;
    }
    return;
}