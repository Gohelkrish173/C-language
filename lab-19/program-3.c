#include<stdio.h>
#include<string.h>

void main(){
    int i,n;
    char s1[10],s2[10],s3[10],s4[10],s5[10],s6[10];
    gets(s1);
    gets(s2);
    gets(s3);
    gets(s4);
    

    printf("lenth of s1=%d",strlen(s1));
    printf("\nlenth of s2=%d",strlen(s2));
    printf("\nlenth of s3=%d",strlen(s3));
    printf("\nlenth of s4=%d",strlen(s4));

    printf("\n\n");
    printf("addemded strings:-\n");
    strcat(s1,s2);
    printf("%s",s1);
    printf("\n");
    strncat(s1,s3,3);
    printf("\n%s",s1);
    printf("\n");

    printf("copy of string:");
    strcpy(s5,s3);
    printf("%s",s5);
    printf("\n");
    strncpy(s6,s4,4);
    printf("%s",s6);
    printf("\n\n");

    printf("comparision of s3&s4 string:");
    printf("\n\n");
    printf("=1 string does not match,0 string matched.\n");
    printf("compare(full word)=%d",strcmp(s3,s4));
    printf("\n");
    printf("compare(2words)=%d",strncmp(s3,s4,2));
    printf("\n\n");

    printf("upercase:- s2,\n");
    printf("s2(upercase)=%s",strupr(s2));
    printf("\n\n");

    printf("lowercase:- s2,\n");
    printf("s2(lowercase)=%s",strlwr(s2));
    printf("\n\n");

    printf("reverse of s4:");
    printf("%s",strrev(s4));
    return;
}