#include<stdio.h>

int palindrome(int);

int main(){

    int number,sum;

    printf("Enter a number: ");

    scanf("%d",&number);

    sum = palindrome(number);

    if(number==sum)

         printf("The given number  %d is a palindrome",number);

    else

    printf("The given number  %d is not a palindrome",number);

    return 0;
}

int palindrome(int num){

    int rem;

static int sum=0;

    if(num!=0){

         rem=num%10;

         sum=sum*10+rem;

         palindrome(num/10);

    }

    return(sum);

}