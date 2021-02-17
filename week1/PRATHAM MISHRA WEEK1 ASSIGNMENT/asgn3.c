//Write a C program to enter the radius of a circle and find its diameter,circumference and area.
#include<stdio.h>
int main()
{
double x;
printf("\t\tC program to enter the radius of a circle and find its diameter,circumference and area.\n");
printf("\t\t---------------------------------------------------------------------------------------\n");
printf("\t\tENTER THE RADIUS OF THE CIRCLE: ");
scanf("%lf",&x);
printf("\n");
printf("\t\tTHE DIAMETER OF THE CIRCLE IS: %.2lf\n",2*x);
printf("\t\tTHE CIRCUMFERENCE OF THE CIRCLE IS: %.2lf\n",2*3.14*x);
printf("\t\tTHE AREA OF THE CIRCLE IS: %.2lf\n",3.14*x*x);
 printf("\n\n\n");
return 0;
}

