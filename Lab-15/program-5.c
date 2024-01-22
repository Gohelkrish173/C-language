#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char a[10],b[10];
	printf("Enter 1 for length ");
	printf("\nEnter 2 for comparision");
	printf("\nEnter 3 for copy ");
	printf("\nEnter 4 for concate ");
	printf("\nEnter 5 for reverse ");
	printf("\nEnter 6 for lower");
	printf("\nEnter 7 for upper ");
	scanf("%d",&n);

	
	switch(n){
		case 1:
			printf("\nenter string1: ");
			fflush(stdin);
			gets(a);
			puts(a);
			printf("Length of array  is %d", strlen(a));
			break;
		case 2:
			printf("enter string1: ");
			fflush(stdin);
			gets(a);
			puts(a);
			printf("enter string2: ");
			gets(b);
			puts(b);
			int y;
			y= strcmp(a,b);
			if(y==0){
				printf("Both are equal");
			}
			else{
				printf("Both  are not equal");
			}
			break;
		case 3:
			printf("Enter string: ");
			fflush(stdin);
			gets(a);
			puts(a);
			strcpy(b,a);
			printf("Array of b: ");
			puts(b);
			break;
		case 4:
			printf("enter string1: ");
			fflush(stdin);
			gets(a);
			puts(a);
			printf("enter string2: ");
			gets(b);
			puts(b);
			printf("Concated string is:");
			puts(strcat(a,b));
			break;
		case 5:
			printf("Enter string: ");
			fflush(stdin);
			gets(a);
			puts(strrev(a));
			break;
		case 6:
			printf("Enter string to convert lower: ");
			fflush(stdin);
			gets(a);
			puts(strlwr(a));
			break;
		case 7:
			printf("Enter string to convert Upper: ");
			fflush(stdin);
			gets(a);
			puts(strupr(a));
			break;
			
		default{
			printf("Invalid input");
			break;
		}
			
	}
	return 0;
}
