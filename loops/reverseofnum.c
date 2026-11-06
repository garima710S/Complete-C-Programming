#include<stdio.h>
int main()
{
    int num,rem,n;
    
    rem=0;
    printf("ENTER A NUMBER: ");
    scanf("%d",&num);
    n=num;
    printf("THE REVERSE OF A NUMBER IS: ");

    while (n>0)
    {
        rem = n%10;
       printf("%d",rem);
        n = n/10;

       
    }

    
    


    return 0;
}