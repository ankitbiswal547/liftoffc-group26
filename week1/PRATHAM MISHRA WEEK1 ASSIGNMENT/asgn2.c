// Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
#include<stdio.h>
int main()
{
double x;
printf("\t\tC program to enter temperature in Celsius and convert it into Fahrenheit\n");
printf("\t\t------------------------------------------------------------------------\n");
printf("\t\tENTER THE TEMPERATURE IN °C: ");
scanf("%lf",&x);
 printf("\n");
printf("\t\tYOUR TEMPERATURE %.2lf°C IS CONVERTED TO °F WHICH IS: %.2lf",x,(x*1.8)+32);
 printf("\n\n\n");
return 0;
}

