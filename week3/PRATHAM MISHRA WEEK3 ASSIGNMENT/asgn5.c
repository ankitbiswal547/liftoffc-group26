//Write a program in C to check whether a given number is palindrome or not using recursion.
#include <stdio.h>
int Pal(int);
int n;
int main()
{
    printf("\n\n\t\tA program in C to check whether a given number is palindrome or not using recursion.\n");
    printf("\t\t------------------------------------------------------------------------------------\n");

    int palindrome;
    printf("\n\t\tENTER THE NUMBER: ");
    scanf("%d", &n);
    palindrome = Pal(n);
    if (palindrome == 1)
        printf("\n\t\t%d IS PALINDROME\n\n", n);
    else
        printf("\n\t\t%d IS NOT PALINDROME\n\n", n);
    return 0;
}
int Pal(int k)
{
    static int sum = 0;
    if (k != 0)
    {
        sum = sum * 10 + k % 10;
        Pal(k / 10);
    }
    else if (sum == n)
        return 1;
    else
        return 0;
}
