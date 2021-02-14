#include <stdio.h>


int main()
{
    float r,dia,circum,area;
    printf("enter the radius of circle: ");
    scanf("%f",&r);
    dia=2*r;
    circum=2*(3.14)*r;
    area=2*(3.14)*r*r;
    printf("the diameter of circle is:%.2f",dia);
    printf("\nthe circumference of circle is:%.2f",circum);
    printf("\nthe area of circle is:%.2f",area);

    return 0;
}
