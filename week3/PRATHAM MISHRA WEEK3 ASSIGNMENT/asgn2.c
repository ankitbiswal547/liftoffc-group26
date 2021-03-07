//Write a c program to print the factorial of a given number using functions.
#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("\n\n\t\tC program to print the factorial of a given number using functions.\n");
    printf("\t\t-------------------------------------------------------------------\n");
    printf("\t\tENTER THE NUMBERr: ");
    scanf("%d", &n);
    if(n>=0)
    fact(n);
    else
    printf("\n\t\tTRY AGAIN WITH A POSITIVE NUMBER\n\n");
    return 0;
   
}

int fact(int k)
{
    int i, f = 1;
    for (i = 1; i <= k; i++)
    {
        f = f * i;
    }
    printf("\n\t\tFACTORIAL OF %d IS %d\n\n", k, f);
    return 0;
}