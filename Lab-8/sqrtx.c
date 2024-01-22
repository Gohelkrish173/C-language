#include<stdio.h>
#include<math.h>

void main(){
    float sqrtx,i=0;

    while(i<=81){
    sqrtx=(sqrt)(i);
    printf("\n sqrt(%f)=%f",i,sqrtx);
    i++;
    }
    return;
}