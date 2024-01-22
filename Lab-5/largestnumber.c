#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter Numbers:");
	scanf("%d %d %d",&a,&b,&c);

	if(a>=b && a>=c){
		printf("a is max");
	}
	else if(b>=a && b>=c){
		printf("b is max");
	}
	else if(c>=a && c>=b){
		printf("c is max");
	}
	return 0;
}