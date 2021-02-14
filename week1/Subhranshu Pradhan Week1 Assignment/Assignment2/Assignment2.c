#include<stdio.h>
int main()
{
	float c,f;
	printf("Enter the Celsius Temprature\n");
	scanf("%f",&c);
	f = 32 + 9*c/5;
	printf("The Temprature is %f fahrenheit",f);
}
