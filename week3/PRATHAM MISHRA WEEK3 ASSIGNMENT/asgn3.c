//Write a program in C to find GCD and LCM of two numbers using recursion.
#include <stdio.h>
int gcd(int x, int y);
int lcm(int x, int y);
int main()
{
    int Num1, Num2;

    printf("\n\n\t\tC program to find GCD and LCM of two numbers using recursion.\n");
    printf("\t\t-------------------------------------------------------------\n");

    printf("\n\t\tENTER THE FIRST NUMBER: ");
    scanf("%d",&Num1);

    printf("\t\tENTER THE SECOND NUMBER: ");
    scanf("%d", &Num2);

    printf("\n\n\t\tGCD OF %d AND %d IS = %d\n", Num1, Num2, gcd(Num1, Num2));
    printf("\t\tLCM OF %d AND %d IS = %d\n\n", Num1, Num2, lcm(Num1, Num2));
    return 0;
}
int gcd(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return gcd(y, x % y);
    }
}

int lcm(int x, int y)
{
static int m=0;//static variable is used here to hold the previous value of m
m=m+y;
if(m%x==0&&m%y==0)
return m;
return lcm(x,y);
}