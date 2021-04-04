#include<stdio.h>
void main()
{
	int x,i,num[i],max,min;
	
	
	printf("Enter the size of the array : ");
	scanf("%d",&i);
	
	
	printf("Enter the numbers to the array:\n");
	for(x=0;x<i;x++)
	{
		scanf("%d",&num[x]);
	}
	
	
	max = min = num[0];
	for(x=0;x<i;x++)
	{
		if(min>num[x])
			min=num[x];
		if(max<num[x])
			max=num[x];
	}
	
	printf("Maximum number is: %d\nMinimum number is: %d",max,min);
}
