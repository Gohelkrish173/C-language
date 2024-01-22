#include<stdio.h>

float main(){
    int n;
    double price,gst,netamount;
    printf("Enter a unit:");
    scanf("%d",&n);
    
    if(n<=50){
        price=n*0.5;
        printf("%.2lf",price);
    }
    else if(n<=150){
        price=50*0.5+(n-50)*0.75;
        printf("%.2lf",price);
    }
    else if(n<=250){
    price=50*0.5+100*0.75+(n-150)*1.2;
    printf("%.2lf",price);
    }
    else if(n>250){
        price=50*0.5+100*0.75+100*1.2+(n-250)*1.5;
        printf("%.2lf",price);
    }
    
    gst=price*0.2;
    netamount=price+gst;
    printf("\n%.2lf",gst);
    printf("\n%.2lf",netamount);
    return 0;
}