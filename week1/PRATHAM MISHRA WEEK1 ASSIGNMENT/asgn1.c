// Write a C program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>
int main()
{
int x,y;
printf("\t\tC program to enter two numbers and perform all arithmetic operations\n");
printf("\t\t----------------------------------------------------------------------\n");
printf("\t\tENTER THE FIRST NUMBER: ");
scanf("%d",&x);
printf("\t\tENTER THE SECOND NUMBER: ");
scanf("%d",&y);
printf("\n");
printf("\t\tADDITION OF %d AND %d IS: %d\n",x,y,x+y);
printf("\t\tMULTIPLICATION OF %d AND %d IS: %d\n",x,y,x*y);
printf("\t\tDIVISION OF %d AND %d IS: %lf\n",x,y,x/(float)y);//(float)acts as a type casting
printf("\t\tSUBSTRACTION OF %d AND %d IS: %d\n",x,y,x-y);
 printf("\n\n\n");
return 0;
}
