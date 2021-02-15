/* 

Write a C program to print given patterns using loops :
*   *
 * * 
  *  
 * * 
*   * 

*/
#include<stdio.h>
int main()
{
printf("\n\nC program to print given patterns using loops :\n\n");

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j||(i+j==6))
            printf("*");
            else
            printf(" ");
        }
      printf("\n");
    }
printf("----------------------------------------------\n\n\n");

printf("YOUR PATTERN:\n\n");

    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==j||(i+j==6))
            printf("*");
            else
            printf(" ");
        }
      printf("\n");
    }
}