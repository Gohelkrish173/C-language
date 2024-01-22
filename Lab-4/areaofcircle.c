#include<stdio.h>
#define Pi 3.14

	float main(){
		float r,area;
		printf("Enter a value of radius :");
		scanf("%f",&r);
		area=Pi*r*r;
		printf("%f",area);
		return 0.0;
	}