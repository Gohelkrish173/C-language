#include<stdio.h>
struct date{
    int dd;
    int mm;
    int yy;
};
struct employee{
    char Name[20];
    char Department[20];
    char Work[20];
    int Salary;
    int Mobile_no;
    int working_hours;
    struct date joining_date;
};

void main(){
    struct employee emp;
    printf("Name:");
    scanf("%s",emp.Name);

    printf("Department:");
    scanf("%s",emp.Department);

    printf("Work:");
    scanf("%s",emp.Work);

    printf("Salary:");
    scanf("%d",&emp.Salary);

    printf("Working Hours:");
    scanf("%d",&emp.working_hours);

    printf("Mobile NO.:");
    scanf("%d",&emp.Mobile_no);

    printf("Joining Date:");
    scanf("%d/%d/%d",&emp.joining_date.dd,&emp.joining_date.mm,&emp.joining_date.yy);
    return;
}