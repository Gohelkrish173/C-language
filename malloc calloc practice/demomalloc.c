#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int * )malloc(5 * sizeof(int));
    int i;
    for(i=0;i<3;i++){
        ptr[i]=(i+1);
    }
    int j=0;
    for(j=0;j<3;j++){
        printf("%d\n",ptr[i]);
    }
    return 0;
}