#include<stdio.h>

int factorial(int a)
{
	int i,fact=1;
	for(i=a;i>=1;i--)
	{
		fact = fact*i;
	}
	return fact;
}

int main()
{
	printf("Enter a number ");
	int num,fact;
	scanf("%d",&num);
	fact = factorial(num);
	printf("%d! = %d",num,fact);
	return 0;
}
