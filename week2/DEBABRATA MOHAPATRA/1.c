#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,last_digit,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0)
   {

        last_digit=num%10;
        num=num/10;
        sum=sum+last_digit;
   }
    printf("\nThe sum of digits of number is: %d",sum);

    return 0;
}
