
#include<stdio.h>
int main()
{
    int i,j,k,s,n;
    n=4; 
    i=1;
    while(i<=n)
    {
        s=1;
        while(s<=n-i)
        {
            printf(" ");
            s++;
        }
                j=1;
        while(j<=i)
        {
            if(j==1)
                printf("*");
            else
                printf(" ");
            j++;
        }

        k=1;
        while(k<i)
        {
            if(k==i-1)
                printf("*");
            else
                printf(" ");
            k++;
        }

        printf("\n");
        i++;
    }

    
    i=n-1;
    while(i>=1)
    {
        s=1;
        while(s<=n-i)
        {
            printf(" ");
            s++;
        }

        j=1;
        while(j<=i)
        {
            if(j==1)
                printf("*");
            else
                printf(" ");
            j++;
        }

        k=1;
        while(k<i)
        {
            if(k==i-1)
                printf("*");
            else
                printf(" ");
            k++;
        }

        printf("\n");
        i--;
    }

    return 0;
}
