#include<stdio.h>
int main()
{
    int num;
    printf("ENTER PERCENTAGE =");
    scanf("%d", & num);
    if (num>=33)
    {
        printf("PASS");
    } if (num<33)
    {
     printf("FAIL");
    }
   return 0; 
    
}