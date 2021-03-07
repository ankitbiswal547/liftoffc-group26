#include <stdio.h>
#include <stdlib.h>

int reverse(int);
int main()
{
    int num,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    sum=reverse(num);
    if(num==sum)
        printf("The given number %d is a palindrome",num);
    else
        printf("The given number %d is not a palindrome",num);
    return 0;
}
int reverse(int num){
    int rem;
    static int sum=0;
    if(num!=0)
    {
         rem=num%10;
         sum=sum*10+rem;
         reverse(num/10);
    }
    return(sum);
}
