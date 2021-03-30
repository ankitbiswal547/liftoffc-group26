//Write a C program to print the sum of all the even elements and even position elements in an array.
#include<stdio.h>
int main()
{
printf("\n\nC program to print the sum of all the even elements and even position elements in an array.\n");
printf("-------------------------------------------------------------------------------------------\n");

int array[100],i,n,even=0,x=0;
printf("HOW MANY ELEMENTS WILL YOUR ARRAY CONTAINS: ");
scanf("%d",&n);
printf("\n\nOK NOW ENTER THE ELEMENTS:\n" );
for(i=0;i<n;i++)
scanf("%d",&array[i]);
for(i=0;i<n;i++)
{
if(array[i]%2==0)
even=even+array[i];
if((i+1)%2==0)
x=x+array[i];
}
printf("SUM OF EVEN ELEMENTS IN THE ARRAY: %d",even);
printf("\nSUM OF EVEN POSITION ELEMENTS IN THE ARRAY: %d\n\n",x);
}
