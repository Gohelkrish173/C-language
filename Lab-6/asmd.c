#include<stdio.h>

double main(){
	double a,b,sum,substraction,multi;
	double divide;
	char disition;
	printf("Enter a value:");
	scanf("%lf %lf",&a,&b);
	printf("Enter a Decision:");
	scanf(" %c",&disition);

	if(disition=='+'){
		sum=a+b;
		printf("%lf",sum);
	}
	if(disition=='-'){
		substraction=a-b;
		printf("%lf",substraction);
	}
	if(disition=='*'){
		multi=a*b;
		printf("%lf",multi);
	}
	if(disition=='/'){
		divide=a/b;
		printf("%lf",divide);
	}
	return 0.0;
}