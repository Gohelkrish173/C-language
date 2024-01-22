#include<stdio.h>
void main(){
    FILE *fp;
    char ch;
    fp=fopen("file.txt","r");
    do{
        ch=getc(fp);
        putchar(ch);
    }while(ch!=EOF);
    fclose(fp); 
    return;
}