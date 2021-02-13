//Write a C program to count the total number of words in a string.
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main()
{
printf("\n\n\t\tWrite a C program to count the total number of words in a string.\n");
printf("\t\t---------------------------------------------------------------------\n");

     char s[200];
     int count = 0, i;
     printf("\n\t\tENTER YOU STRING :");
     scanf("%[^\n\t\t]s", s);
     for (i = 0;s[i] != '\0';i++)
     {
         if (s[i] == ' ' && s[i+1] != ' ')
             count++;    
     }
     printf("\n\t\tNUMBER OF WORDS IN THE STRING: %d\n\n", count + 1);
}






