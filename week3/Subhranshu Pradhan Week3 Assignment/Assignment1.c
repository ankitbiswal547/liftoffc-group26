#include<stdio.h>

int sqr(int a)
{
	return (a*a);
}

int main()
{
	printf("Enter a number ");
	int num,sq;
	scanf("%d",&num);
	sq = sqr(num);
	printf("The Square of number is %d",sq);
	return 0;
}
