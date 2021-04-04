#include<stdio.h>
int factorial(int n)
{
   if(n==0)
   {
   		return 1;
   }
   return(n*factorial(n-1));
}
int main()
{
   int num, fact;
   printf("\nEnter any  number:");
   scanf("%d",&num);
   
   fact = factorial(num);
   
   printf("%d! = %d",num, fact);
   return 0;
}
