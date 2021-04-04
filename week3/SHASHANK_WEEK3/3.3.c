#include <stdio.h>
int gcd(int x, int y);  

int main()
{
   int num1, num2, hcf, lcm;

   printf("Enter two number \n");
   scanf("%d %d", &num1, &num2);

   hcf = gcd(num1, num2);
   printf("GCD: %d", hcf);
   printf("\nLCM: %d", (num1 * num2) / hcf);
   return 0;
}
int gcd(int x, int y)
{
   if (y == 0)   
   {
      return x;
   }
   else 
   {
      return gcd(y, x % y);   
   }
}