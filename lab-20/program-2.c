#include<stdio.h>

struct book{
    char Title[40];
    char Author[40];
    char Publication[40];
    int Price;
};

void main(){
    int i,n;
    printf("n:");
    scanf("%d",&n);
    struct book b[n];

    for(i=0;i<n;i++){
        printf("B%d :-",(i+1));
        printf("\n");
        
        printf("Title:");
        scanf("%s",b[i].Title);

        printf("Author:");
        scanf("%s",b[i].Author);

        printf("Publication:");
        scanf("%s",b[i].Publication);

        printf("Price:");
        scanf("%d",&b[i].Price);
        printf("\n");
    }
    return;
}
