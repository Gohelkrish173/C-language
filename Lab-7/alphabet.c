#include<stdio.h>

void main(){
    char cc;
    printf("Enter a character:");
    scanf("%c",&cc);

    (cc=='a'||cc=='b'||cc=='c'||cc=='d'||cc=='e'||cc=='f'||cc=='g'||cc=='h'||cc=='i'||cc=='j'||cc=='k'||cc=='l'||cc=='m'||cc=='n'||cc=='o'||cc=='p'||cc=='q'||cc=='r'||cc=='s'||cc=='t'||cc=='u'||cc=='v'||cc=='w'||cc=='x'||cc=='y'||cc=='z'||cc=='A'||cc=='B'||cc=='C'||cc=='D'||cc=='E'||cc=='F'||cc=='G'||cc=='H'||cc=='I'||cc=='J'||cc=='K'||cc=='L'||cc=='M'||cc=='N'||cc=='O'||cc=='P'||cc=='Q'||cc=='R'||cc=='S'||cc=='T'||cc=='U'||cc=='V'||cc=='W'||cc=='X'||cc=='Y'||cc=='Z')?
    printf("given character is alphabet."):printf("given character is non-alphabet.");
    return;
}