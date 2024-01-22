#include<stdio.h>

void main(){
    FILE *p;
    char ch;
    int w=1,t=0,ln=0,c=0;
    p=fopen("file.txt","r");
    ch=getc(p);
    while(ch!=EOF){
        if(ch == '\n'){
            ln++;
        }
        else if(ch == '\t'){
            t++;
        }
        else if(ch == ' '){
            w++;
        }
        else{
            c++;
        }
        ch=getc(p);
    }
    fclose(p);
    printf("Lines=%d, tabs=%d, words=%d, characters= %d\n",ln,t,w,c);
    return;
}