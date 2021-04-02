#include<stdio.h>
int main(){
    int radius;
    float pi=3.14;
    printf("Enter the radius \n");
    scanf("%d",&radius);
    float circum=2*pi*radius;
    printf("Diameter of the circle is %d\n",2*radius);
    printf("The circumferance of the circle is %0.3f\n",circum);
    printf("The area of the circle is %0.3f\n",pi*radius*radius);
    return 0;
}