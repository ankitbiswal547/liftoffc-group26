#include<stdio.h>
void main()
{
	printf("Enter Numbers to the Array :\n");
	int n[10];
	int j,i,sum=0;
	for(i = 0;i<10;i++)
	{
		scanf("%d",&n[i]);
	}
	for(j = 0;j<10;j++)
	{
		if(j%2 != 0)
		{
			sum += n[j];
		}
		else
		{
			if(n[j]%2 == 0)
			{
				sum += n[j];
			}
		}
	}
	printf("The Sum is %d",sum);
}
