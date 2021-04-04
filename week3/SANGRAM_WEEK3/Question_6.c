#include<stdio.h>
long int num(int n); 
 int main(){
     int n;
     printf("Enter the number:\n");
     scanf("%d",&n);
     printf("Factorial of number %d:%ld\n",n,num(n));
     return 0;
}
long int num(int n)
{
    if(n>=1)
    
        return n*num(n-1);
        else
        return 1;
    
}