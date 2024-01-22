#include<stdio.h>

float main(){
    float n,hra,da,grosssalary;
    printf("Enter a salary:");
    scanf("%f",&n);

    if(n<10000){
        hra=n*0;
        da=n*0;
        grosssalary=n;
        printf("%f",hra);
        printf("\n%f",da);
        printf("\n%f",grosssalary);
    }
    else if(n>=10000 && n<20000){
        hra=n*0.2;
        da=n*0.8;
        grosssalary=n+hra+da;
        printf("hra=%f",hra);
        printf("\nda=%f",da);
        printf("\ngrosssalary=%f",grosssalary);
    }
    else if(n>=20000 && n<30000){
    hra=n*0.25;
    da=n*0.9;
    grosssalary=n+hra+da;
    printf("hra=%f",hra);
    printf("\nda=%f",da);
    printf("\ngrosssalary=%f",grosssalary);
    }
    else if(n>=30000){
        hra=n*0.3;
        da=n*0.95;
        grosssalary=n+hra+da;
        printf("hra=%f",hra);
        printf("\nda=%f",da);
        printf("\ngrosssalary=%f",grosssalary);
    }
    return 0.0;
}