//Write a program in C to find the square of any number using the function.
#include <stdio.h>
float sqr(float n)
{
    return (n * n);
}
int main()
{
    float n;
    float m;
    printf("\n\n\t\tC program to find the square of any number using the function \n");
    printf("\t\t-------------------------------------------------------------\n");

    printf("\t\tENTER YOUR NUMBER : ");
    scanf("%f", &n);
    m = sqr(n);
    printf("\t\tTHE SQUARE OF %.2f IS : %.2f\n\n", n, m);
    return 0;
} 