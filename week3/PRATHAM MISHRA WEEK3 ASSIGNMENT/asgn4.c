//Write a program in C to find the factorial of a number using recursion.
#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("\n\n\t\tC program to print the factorial of a given number using recursion.\n");
    printf("\t\t-------------------------------------------------------------------\n");
    printf("\t\tENTER THE NUMBERr: ");
    scanf("%d", &n);
    if (n >= 0)
        printf("\n\t\tFACTORIAL OF %d IS %d\n\n", n, fact(n));
    else
        printf("\n\t\tTRY AGAIN WITH A POSITIVE NUMBER\n\n");
    return 0;
}

int fact(int k)
{
    if (k >= 1)
        return k * fact(k - 1);
    else
        return 1;
}

