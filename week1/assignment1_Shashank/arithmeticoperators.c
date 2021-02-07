#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter any two number:");
	scanf("%d %d",&a,&b);
	
	printf("\na=%d & b=%d",a,b);
	c=a+b;
	printf("\na+b=%d \n",c);
	c=a-b;
	printf("a-b=%d \n",c);
	c=a*b;
	printf("a*b=%d \n",c);
	c=a/b;
	printf("a/b=%d \n",c);
	
	return 0;
}
