#include<stdio.h>
struct student{
    char Name;
    int Roll_no;
    int Age;
    float Percentage;
    
};

void main(){
    int i,n;
    printf("n:");
    scanf("%d",&n);
    struct student std[n];

    for(i=0;i<n;i++){
        printf("S%d :-",(i+1));
        printf("\n");
        printf("Name:");
        scanf("%s",std[i].Name);
        printf("Roll No.:");
        scanf("%d",&std[i].Roll_no);
        printf("Percentage:");
        scanf("%f",&std[i].Percentage);
        printf("Age:");
        scanf("%d",&std[i].Age);
        printf("\n\n");
    }
    return;       
}