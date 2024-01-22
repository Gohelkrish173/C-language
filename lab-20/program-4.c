#include<stdio.h>
#include<string.h>

struct std{
    char Name;
    int Roll_no;
    int Enrollment_no;
    float CPI;
};

void main(){
    int i,n;
    printf("n:");
    scanf("%d",&n);
    struct std s[n];

    for(i=0;i<n;i++){
        printf("s%d :-",(i+1));
        printf("\nName:");
        scanf("%s",s[i].Name);
        printf("\nRoll no.:");
        scanf("%d",&s[i].Roll_no);
    }
    return;
}