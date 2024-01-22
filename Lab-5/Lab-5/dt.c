#include<stdio.h>
#include<time.h>

void main(){

    time_t d;
    time(&d);
    printf("current (date & time):%s", ctime(&d));
    return;
}