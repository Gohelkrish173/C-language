#include<stdio.h>

int main(){
int a,b;
printf("enter a value of a,b:");
scanf("%d %d",&a,&b);

if(a^b){
    printf("a is not equals to b.");
}
else{
    printf("a is equals to b.");
}
return 0;
}