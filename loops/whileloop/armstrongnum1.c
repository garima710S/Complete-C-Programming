#include<stdio.h>
int main()
{

    int n ,r,sum,num;

    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    r=0;
    sum=0;
    num=n;
    while (n>0)
    {
        r=n%10;
        sum=(r*r*r)+sum;
        n=n/10;
    }
    if (num==sum)
    {
        printf("%d is a armstrong number", num);
    }
    else{
        printf("%d is not a armstrong number", num);
    }

    return 0;
}