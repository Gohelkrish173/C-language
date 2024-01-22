#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int * )calloc(5 , sizeof(int));
    int i;
    for(i=0;i<3;i++){
        ptr[i]=(i+1);
    }
    int j=0;
    for(j=0;j<3;j++){
        printf("%d\n",ptr[i]);
    }
    int *ptrr;
    ptrr = (int *)realloc(ptr,(8,sizeof(int)));
    ptrr[0]=1;
    for(j=0;j<8;j++){
        printf("%d\n",ptrr[j]);
    }
    return 0;
}