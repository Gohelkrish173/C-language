#include<stdio.h>

void main(){
	char C;
	printf("Enter character:");
	scanf("%c",&C);

	if(C=='a'||C=='e'||C=='i'||C=='o'||C=='u'){
		printf("given char is vowels");
		return;
	}
		printf("given char is consol");
	return;
}
