//WAP to enter the radius of circle and find diameter,circumference and area
#include<stdio.h>
#include<stdio.h>
 int main(){
     float radius,area,diametercircum;
     
     float pi=3.14;
     printf("Enter the radius:\n");
     scanf("%f",&radius);
     printf("The area of circle is %f\n",pi*radius*radius);
     printf("The diameter of circle is %f\n",2*radius);
     printf("The circumference of the circle is %f\n",2*pi*radius);
     return 0;
}