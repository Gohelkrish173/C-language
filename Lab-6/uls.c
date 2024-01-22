#include<stdio.h>

void main(){
    char aa;
    printf("Enter A Character:");
    scanf(" %c",&aa);

    if(aa=='A' ||aa=='B' ||aa=='C'||aa=='D'||aa=='E'||aa=='F'||aa=='G'
        ||aa=='H'||aa=='I'||aa=='J'||aa=='K'||aa=='L'||aa=='M'||aa=='N'
        ||aa=='O'||aa=='P'||aa=='Q'||aa=='R'||aa=='S'||aa=='T'||aa=='U'||aa=='V'
        ||aa=='W'||aa=='X'||aa=='Y'||aa=='Z'){
        printf("given char. is upercase.");
        return;
    }
    else if(aa=='a' ||aa=='b' ||aa=='c'||aa=='d'||aa=='e'||aa=='f'||aa=='g'||
            aa=='h'||aa=='i'||aa=='j'||aa=='k'||aa=='l'||aa=='m'||aa=='n'||aa=='o'
            ||aa=='p'||aa=='q'||aa=='r'||aa=='s'||aa=='t'||aa=='u'||aa=='v'||aa=='w'||aa=='x'||aa=='y'||aa=='z'){
        printf("given char. is lowercase.");
        return;
    }
    else if(aa=='0' ||aa=='1' || aa=='2' ||aa=='3' ||aa=='4' ||aa=='5' ||aa=='6' ||aa=='7' ||aa=='8' ||aa=='9'){
        printf("given char. is digit.");
    }
    else{
    printf("given char. is special char.");
    }
    return;
}