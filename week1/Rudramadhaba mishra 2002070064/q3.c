

#include <stdio.h>

int main()
{
    float r, d = 0, c = 0, a = 0;
    

    printf("Enter the radius of the circle::\n");
    scanf("%f", &r);

    d = 2 * r;
    c = 2 * 3.14 * r;
    a = 3.14 * (r * r);
 
    printf("\n");
    printf("Diameter      :: = %f units \n", d);
    printf("Circumference :: = %f units \n", c);
    printf("Area          :: = %f sq. units ", a);

    return 0;
}