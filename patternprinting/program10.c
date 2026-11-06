#include <stdio.h>
int main()
{
    int i, j, n;
    n = 5;
    i = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}