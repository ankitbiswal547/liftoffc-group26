#include<stdio.h>
void main()
{
	int num,d,sum = 0;
	
	printf("Enter a Number : ");
	scanf("%d",&num);
	
	while(num > 0)
	{
		d = num % 10;
		sum = d + sum;
		num = num/10;
	}
	
	printf("The Sum Of Digits of the number is %d",sum);
}
