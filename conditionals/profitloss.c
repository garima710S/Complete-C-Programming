#include<stdio.h>
int main()
{
    int cp,sp;

    printf("ENTER COST PRICE =");
    scanf("%d", & cp);

     printf("ENTER SELLING PRICE =");
    scanf("%d", & sp);

    if(cp>=sp){
        printf("LOSS");
    }if(sp>cp){
        printf(" PROFIT ");
    }
    return 0;
}