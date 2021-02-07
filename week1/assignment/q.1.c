#include <stdio.h>


int main()
{
    int x,y,sum,sub,mul;
    float div;
    printf("enter your first number:");
    scanf("%d",&x);
    printf("enter your second number:");
    scanf("%d",&y);
    sum=x+y;
    sub=x-y;
    mul=x*y;
    div=(float)x/y;
    printf("\nthe addition the given numbers is %d",sum );
    printf("\nthe subtraction the given numbers is %d",sub );
    printf("\nthe multiplication the given numbers is %d",mul );
    printf("\nthe division the given numbers is %f",div );

    return 0;
}
