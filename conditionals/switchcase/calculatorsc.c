#include<stdio.h>
int main()
{
    int a,b,choice;

    printf("ENTER FIRST NUMBER:");
    scanf("%d",& a);
    printf("ENTER SECOND NUMBER:");
    scanf("%d",& b);

    printf("ENTER CHOICE:");
    scanf("%d",& choice);
    
    printf("PRESS: 1:ADD 2:SUB 3:MUL- 4:DIV");
    switch(choice)
    {
        case 1:
        { printf("\nADDITION = %d", a+b);
            break;
        }case 2:
        {
            printf("\nSUBSTRACTION = %d", a-b);
        break;        }
        case 3:
        {
            printf("\nMULTIPLICATION = %d", a*b);
            break;
        }
        case 4:
        {
            printf("\nDIVISION = %d", a/b);
            break;
        }
        default: {
            printf("\nINVALID CHOICE");
            break;

        }    }  
    return 0;
}