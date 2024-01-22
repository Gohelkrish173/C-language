#include<stdio.h>
#include<string.h>

struct std{
    char name;
    int rollno;
    int Enrollmentno;
    float CPI;
};

int main(){
    int i,n;
    struct std s[n];
    
    for(i=0;i<n;i++){
        printf("student%d:",(i+1));
        printf("\nname:");
        scanf("%s",s[i].name);
        printf("\nRoll no.");
        scanf("%d",&s[i].rollno);
        printf("\nEnrollment no.");
        scanf("%d",&s[i].Enrollmentno);
        printf("\nCPI:");
        scanf("%f",&s[i].CPI);
    }
    return 0;
}