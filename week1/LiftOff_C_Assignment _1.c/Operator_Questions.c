//WAP to enter the two numbers and perform all arithmetic operators
#include<stdio.h>
#include<math.h>
 int main(){
     int a ,b;
     printf("Enter the 1st number:\n");
     scanf("%d\n",&a);
     printf("Enter the 2nd number:\n");
     scanf("%d\n",&b);
     int z=a*b;
     printf("The value of z is %d\n ",z);
     printf("The value of a+b is %d\n ",a+b);
     printf("The value of a-b is %d\n ",a-b);
     printf("The value of a*b is %d\n ",a*b);
     printf("The value of a/b is %f\n ",(double)a/b);
     printf("The value of a^b is %f\n ",pow(a,b));

     return 0;
}