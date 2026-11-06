#include<stdio.h>
int main()
{
    char ch;

    printf("Enter Character:");
    scanf("%c", &ch);
    printf("The Rainbow Color Is : ");

    if (ch=='v')
    {
        printf("Violet");
    }else if (ch=='i')
    {
        printf("Indigo");
    }else if (ch=='g')
    {
        printf("Green");
    }else if (ch=='y')
    {
        printf("Yellow");
    }else if (ch=='o')
    {
     printf("Orange");
    }else if (ch=='r')
    {
        printf("Red");
    }else{
        printf("Invalid Input");
    }
    
return 0;
}