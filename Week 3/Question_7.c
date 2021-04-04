#include<stdio.h>
#include<math.h>
int reverse(int num);
int isPalindrome(int num);
 int main(){
     int num;
     printf("Enter the number:\n");
     scanf("%d",&num);
     if (isPalindrome(num)==1)
     {
         printf("%d is the palindrome number.\n",num);
     }
     else
     {
         printf("%d is not the palindrome number.\n",num);
     }
     return 0;
}
int isPalindrome(int num)//function for reverse 
{
    if(num==reverse(num))
    {
      return 1;
    }
    return 0;
}
int reverse(int num)
{
    int digit=(int)log10(num);//typecasted to integer value
    if(num==0)
    {
        return 0;
        return ((num%10 *pow(10,digit))+reverse(num/10));//logic for reverse
    }
}