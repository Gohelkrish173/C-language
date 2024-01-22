#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *fp1=NULL,*fp2=NULL;
    char ch;

    fp1=fopen("file.txt","r");
    if(fp1==NULL){
        printf("no file");
        exit(1);
    }
    fp2=fopen("destination.txt","w");
    if(fp2==NULL){
        printf("no file");
        exit(1);
    }
    while((ch=fgetc(fp1))!=EOF)

    {
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("successfully copied");
    return;
}