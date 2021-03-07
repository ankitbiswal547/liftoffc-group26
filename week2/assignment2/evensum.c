#include<stdio.h>
void main()
{
	int a[100],i,n,j,s=0;
	printf("ENTER NUMBER OF ELEMENTS:");
	scanf("%d",&n);
	printf("ENTER ELEMENTS OF ARRAY:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<=n;j++)
	{
		if(a[j]%2==0 || j%2==0)
		{
			s=s+a[j];
			
		}
	}
	
	printf("SUM OF EVEN NUMBER AND EVEN ELEMENTS:%d",s);
}
