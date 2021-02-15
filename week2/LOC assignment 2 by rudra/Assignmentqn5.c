#include<stdio.h>
void main()
{
	int m,n;
	for(n=1;n<=3;n++)
	{
		for(m=1;m<=3;m++)
		{
			if(n==m)
				printf("*");
			else
				printf(" ");	
		}
		for(m=1;m<3;m++)
		{
			if(m==3-n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for(n=2;n>0;n--)
	{
		for(m=1;m<=3;m++)
		{
			if(n==m)
				printf("*");
			else
				printf(" ");	
		}
		for(m=2;m>0;m--)
		{
			if(m==n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
   }
}
