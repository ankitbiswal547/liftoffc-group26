#include<stdio.h>
int multiply(int);
int main()
{
   int num, factorial;
   printf("\nEnter any  number:");
   scanf("%d",&num);
 
   factorial = multiply(num);

   printf("\nfactorial of %d is: %d",num, factorial);
   return 0;
}
int multiply(int n)
{
   if(n==0)
      return(1);
      
   return(n*multiply(n-1));
}