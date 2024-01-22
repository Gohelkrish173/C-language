#include<stdio.h>

void main(){
    int i=101,div,count=0;

    while(i>100 && i<200){
        if(i%7==0 && i%5!=0){
            div=i;
            count=count+1;
            printf("\ndiv by 7 but not div by 5:%d",div);
        }
        i++;
    }
    printf("\ncount of divisable no.=%d",count);
    return;
}