#include<stdio.h>

void main(){
    char nn,decision;
    printf("Enter a value of char or string:");
    scanf("%c",&nn);
    printf("Enter a decision to convert char or string to:");
    scanf(" %c",&decision);

    if(decision=='i'){
        printf("convert int is=%d",(int)(nn));
    }
    else if(decision=='f'){
        printf("convert float is=%f",(float)(nn));
    }
    return;
}