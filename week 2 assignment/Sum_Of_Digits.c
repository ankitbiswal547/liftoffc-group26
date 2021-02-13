#include<stdio.h>

 int sumDigit(long long n){
      
     int sum=0;
     while(n!=0)
     {
         sum=sum+(n%10);
         n=n/10;

     }
     return sum;
 }
     int main()
     {

     long long n;
     int sum=0;
     printf("Enter the number:\n");
     scanf("%lld",&n);
     //printf("The number of digits present:%d\n",countDigit(n));
     printf("Sum of digits:%d\n",sumDigit(n));


     
     return 0;
}