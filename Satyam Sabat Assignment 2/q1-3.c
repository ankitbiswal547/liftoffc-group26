#include<stdio.h>
int main()
{
	int sum=0,num;
	printf("enter a no.: ");
	scanf("%d",&num);
	while(num)
	{ 
	 sum+= num % 10;
     num=num/10;
	}
	
	printf("Sum of digits=%d",sum);
	return 0;
}
