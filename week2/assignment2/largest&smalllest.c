#include<stdio.h>
void main()
{
	int n,i,j,large,small;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter elements of array:");
	for(i=0;i<n;i++)
	{
    scanf("%d",&a[i]);
    }
	large=small=a[0];
	for(j=0;j<n;j++)
	{
	if(large<a[j])
	large=a[j];
	if(small>a[j])
	small=a[j];	
	}
	printf("\nLARGEST:%d",large);
	printf("\nSMALLEST:%d",small);
}
