#include <stdio.h>
#include <stdlib.h>


int fact(int n);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The factorial of the given no. is:%d",fact(num));
    return 0;
}
int fact(int n)
{   int fact=1;
    for(int i=1;i<=n;i++)
      {
       fact*=i;
      }
      return fact;;
}
