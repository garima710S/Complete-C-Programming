#include<stdio.h>
int main()
{
    int num;
    printf("ENTER PERCENTAGE=");
    scanf("%d", & num);

    if(num>=33){
        printf("PASS");
    }else{
        printf("FAIL");
    }
    return 0;
}