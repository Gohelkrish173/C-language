#include<stdio.h>
#include<math.h>

void main(){
    int n,sum;
    printf("\n Entre a value of n:");
    scanf("%d",&n);

    sum=(n*(n+1)*((2*n)+1))/6;
    printf("\n print sum of 1+4+9+16+25+....+n, sum to square of 1 to n.");
    printf("\n sum to square of 1 to n= %d",sum);
    return;
}