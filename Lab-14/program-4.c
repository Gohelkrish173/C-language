#include<stdio.h>

void main(){
    int i,n,max,min,sum=0;
    float avg;
    printf("Enter a value of n:");
    scanf("%d",&n);
    int num[n];

    for(i=0;i<n;i++){
        printf("num%d=",i);
        scanf("%d",&num[i]);
    }
    for(i=1;i<n;i++){
        if(num[0]>num[i]){
            max=num[0];
        }
        else{
            max=num[i];
        }
    }
    for(i=1;i<n;i++){
        if(num[0]<num[i]){
            min=num[0];
        }
        else{
            min=num[i];
        }
    }
    for(i=0;i<n;i++){
        sum=sum+num[i];
    }
    avg=sum/n;
    printf("\nmax=%d",max);
    printf("\nmin=%d",min);
    printf("\nsum of n numbers= %d",sum);
    printf("\navg of n numbers= %f",avg);
    return;
}