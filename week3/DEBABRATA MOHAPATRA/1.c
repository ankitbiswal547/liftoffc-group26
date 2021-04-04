#include <stdio.h>
#include <stdlib.h>

float cal_sqr(float num);
int main()
{
    float num,cal_sq,sq;
    printf("Enter the number of which u want to find the square: ");
    scanf("%f",&num);
    sq=cal_sqr(num);
    printf("The square of the number is:%.2f",sq);
    return 0;
}
float cal_sqr(float num)
{
    return(num * num);

}
