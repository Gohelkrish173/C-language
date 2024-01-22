#include<stdio.h>

void main(){
    float  r,g,b,c,m,y,k,white,R,G,B;
    printf("Enter a value of r,g,b:");
    scanf("%f %f %f",&r,&g,&b);

    R=r/255;
    G=g/255;
    B=b/255;

    if(R>=G && R>=B){
        white=R;
        printf("white=%f",white);
    }
    else if(B>=R && B>=G){
        white=B;
        printf("white %f",white);
    }
    else if (G>=R && G>=B){
        white=G;
        printf("white %f",white);
    }
    
    c=(white-R)/white;
    m=(white-G)/white;
    y=(white-B)/white;
    k=1-white;

    printf("\nc=%f",c);
    printf("\nm=%f",m);
    printf("\ny=%f",y);
    printf("\nk=%f",k);

    return;
}