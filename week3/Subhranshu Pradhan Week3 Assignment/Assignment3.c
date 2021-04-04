#include<stdio.h>

int gcd(int a,int b)
{
    if (b == 0)
	{
    	return a;
    }
    else
	{
    	return gcd(b, a % b);
    }
}

int main()
{
	int lcm,hcf,x,y;
	
	printf("Enter 2 Number :\n");
	scanf("%d %d",&x,&y);
	
	hcf = gcd(x,y);
	lcm = (x*y)/hcf;
	
	printf("LCM is %d\n",lcm);
	printf("HCF is %d",hcf);	
}
