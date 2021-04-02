#include<stdio.h>
int main(){
    int celsius;
    printf("Enter the temperature in celsius\n");
    scanf("%d",&celsius);
    float g=(celsius*1.80)+32;
    printf("Temperature in farenheit is %0.2f\n",g);

    return 0;
}