#include<stdio.h>
#include<math.h>

void main(){
    double a,b,c,root1,root2,sqrtx,realpart,imgpart;
    printf("Enter a value of a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&c);

    printf("quadratic equation is:%lfx^2+%lfx+%lf",a,b,c);
    sqrtx=sqrt((b*b) - (4*a*c));
    printf("\nsqrtx=%lf",sqrtx);

    if(sqrtx>0){
        root1=(((-b)+(sqrtx))/2*a);
        root2=(((-b)-(sqrtx))/2*a);
        printf("\nroot-1 =%.2lf \nroot-2=%.2lf",root1,root2);
    }
    else if(sqrtx==0){
        root1=(((-b)+(sqrtx))/2*a);
        root2=(((-b)-(sqrtx))/2*a);
        printf("\nroot-1 =%.2lf  \nroot-2=%.2lf",root1,root2);
        sqrtx=sqrtx*sqrtx;
    }    
    else{
        realpart=((-b)/2*a);
        imgpart=((sqrt(-sqrtx))/2*a);
        printf("\nroot-1= %.2lf+%.2lf \nroot-2=%.2lf+%.2lf",realpart,imgpart,realpart,imgpart);
    }
    return;
}