#include<stdio.h>
#include<math.h>
 double square(double num){
     return (num*num);
 }
 int main()
 {
     double n;
     int num;
     printf("Function:-find square of any number :\n");
     printf("---------------------\n");
     printf("Input the number for square:\n");
     scanf("%d",&num);
     n=square(num);
     printf("The square of %d is :%.2f\n",num,n);
 
     return 0;
}