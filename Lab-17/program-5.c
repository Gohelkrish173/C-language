#include<stdio.h>

void main(){
    int i,n;
    printf("n:");
    scanf("%d",&n);
    int num[n];
    int *numbers[n];

    printf("\n\n");

    for(i=0;i<n;i++){
        printf("num%d=",(i+1));
        scanf("%d",&num[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++){
        numbers[i]=&num[i];
    }
    for(i=0;i<n;i++){
        printf("\nnum%d=%d",(i+1),*numbers[i]);
        printf("\naddress num%d=%d",(i+1),numbers[i]);
    }
    return;
}