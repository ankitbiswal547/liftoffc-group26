#include<stdio.h>
void main()
{
	int n,r,c=0;
	printf("ENTER ANY NUMBER:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		c=c+r;
		n=n/10;
		
	}
	printf("\nSUM OF DIGITS:%d",c);
}
