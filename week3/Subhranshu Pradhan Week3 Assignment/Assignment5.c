#include<stdio.h>

int rev(int a)
{
	int rem = 0, num = 0;
	
	if(a!=0)
	{
		rem = a%10;
		num = num*10 + rem;
		
		rev(a/10);
	}
	return num;
}

int main()
{
	int n;
	printf("Enter a Number \n");
	scanf("%d",&n);
	
	if(n==rev(n))
	{
		printf("The Number is Palindrome");
	}
	else
	{
		printf("The Number is not Palindrome");
	}
}
