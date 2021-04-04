#include<stdio.h>
int main()
{
	float r,ans;
	printf("Enter the radius of the Circle(in meter)\n");
	scanf("%f",&r);
	ans=2*r;
	printf("Diameter = %f m\n",ans);
	ans=2*r*3.141;
	printf("Circumference = %f m\n",ans);
	ans=r*r*3.141;
	printf("Area = %f sq.m\n",ans);
	return 0;
}
