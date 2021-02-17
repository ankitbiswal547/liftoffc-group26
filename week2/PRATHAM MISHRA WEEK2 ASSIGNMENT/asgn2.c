//Write a C program to print the sum of all the even elements and even position elements in an array.
#include<stdio.h>
int main()
{
printf("\n\nC program to print the sum of all the even elements and even position elements in an array.\n");
printf("-------------------------------------------------------------------------------------------\n");

int array[100],i,n,even=0,odd=0;
printf("HOW MANY NUMBERS WILL YOUR ARRAY CONTAINS: ");
scanf("%d",&n);
printf("\n\nOK NOW ENTER THE NUMBERS:\n" );
for(i=0;i<n;i++)
scanf("%d",&array[i]);
for(i=0;i<n;i++)
{
if(array[i]%2==0)
even=even+array[i];
else
odd=odd+array[i];
}
printf("SUM OF EVEN NUMBERS IN THE ARRAY: %d",even);
printf("\nSUM OF ODD NUMBERS IN THE ARRAY: %d\n\n",odd);
}