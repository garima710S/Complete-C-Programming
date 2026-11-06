#include<stdio.h>
int main()
{
    int num,n,sum,r; 
    
    printf("Enter A Number: ");
    scanf("%d",&num);
    n =num;
    r=0;
    sum=0;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("THE SUM OF THE GIVEN NUMBER DIGIT IS : %d", sum);
    
    return 0;
}