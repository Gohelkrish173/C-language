#include<stdio.h>

int main(){
	int a;
	printf("Enter a value of a:");
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("given numver is even");
	}
	else{
		printf("given number is odd");
	}
	return 0;
}