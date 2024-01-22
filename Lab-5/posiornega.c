#include<stdio.h>

int main(){
	int a;
	printf("Enter value of a:");
	scanf("%d",&a);

	if(a>=0){
		printf("number is positive");
	}
	else{
		printf("number is negative");
	}
	return 0;
}