#include<stdio.h>
#include<math.h>
 int main(){
     printf("Enter the number :\n");
     printf("Factorial of number is %d is ",fact());
 }
 int fact()
 {
     int i,fact=1,n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         fact=fact*i;
     }
     return fact;
}