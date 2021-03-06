//Write a C program to calculate the sum of digits of a number.
#include<stdio.h>  
 int main()    
{    
printf("\n\n\t\tC program to calculate the sum of digits of a number.\n");
printf("\t\t-------------------------------------------------------------\n");

int n,sum=0,m,o;    
printf("\t\tENTER A NUMBER: ");    
scanf("%d",&n);   
o=n; 
while(n>0)
{    
m=n%10;  
sum=sum+m;    
n=n/10;    
}    
printf("\n\t\tSUM OF THE DIGITS OF %d IS: %d\n\n",o,sum);    
return 0;  
}   