#include<stdio.h>

void main(){
    int d,days,month,year;
    printf("Entre a number of days:");
    scanf("%d",&d);

    year = (d)/365;
    month = (d-(year*365))/30;
    days = (d-(year*365)-(month*30));

    printf("year= %d, month= %d, days= %d",year,month,days);
    return;
}