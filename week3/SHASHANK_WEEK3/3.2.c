#include <stdio.h>

int fact(int);
void main()
{
	int num,factorial;
 
  	printf("Enter a number\n");
  	scanf("%d",&num);
  	factorial=fact(num);
    printf("Factorial of %d = %d\n",num,factorial);
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}