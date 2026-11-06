#include<stdio.h>
int main()
{
    int i;

    printf("ENTER THE NUMBER:");
    scanf("%d",& i);

    if (i<0)

    {
        printf("NEGATIVE NUMBER");
    } else {
        printf("POSITIVE NUMBER");
    }
    
    return 0;
}