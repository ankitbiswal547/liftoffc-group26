//WAP to enter the temperature in celsius and convert to fahrenheit
#include<stdio.h>

 int main(){
     float celsius,far;
     printf("Enter the temperature:\n");
     scanf("%f",&celsius);
     far=(celsius*9/5)+32;
     printf("The value of this celsius temperature is %f ",far);
     return 0;
}