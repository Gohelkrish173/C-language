#include<stdio.h>

void main(){
    double a,b,c,d,e,total=0;
    double percentage;
    printf("Enter a subject marks:");
    scanf("%lf %lf %lf %lf %lf",&a,&b,&c,&d,&e);

    total=a+b+c+d+e;
    percentage=total/5;
    printf("\ntotal mark=%lf",total);
    printf("\nstudent percentage=%lf",percentage);
    
    if(percentage<35){
        printf("\nstudent is fail.");
    }
    else if(percentage>=35 && percentage<=45){
        printf("\nstudent is pass.");
    }
    else if(percentage>45 && percentage<=60){
        printf("\nstudent is second class.");
    }
    else if(percentage>60 && percentage<=70){
        printf("\nstudent is first class.");
    }
    else if(percentage>70){
        printf("\nstudent is distinct class.");
    }
    return;
}