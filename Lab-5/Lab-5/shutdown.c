#include<stdio.h>
#include<stdlib.h>

void main(){
    char shut,re;
    printf("do you want to shutdown pc press (y/n):\n");
    scanf("%c",&shut);
    printf("do you want to restart pc (y/n):\n");
    scanf(" %c",&re);

    if(shut=='y' || shut=='Y'){
        system("c:\\windows\\system32\\shutdown /s");
    }
    else if(re=='y' || re=='Y'){
        system("c:\\windows\\system32\\shutdown /r");
    }
    return;
}