//WAP TO CHECK WHETHER THE ALPHABET IS VOWEL OR CONSONANT USING SWITCH CASE
#include<stdio.h>

 int main(){
     char ch;
     printf("Enter the alphabet:\n");
     scanf("%c",&ch);
     switch(ch)
    {
         case 'a':
         printf("It is a Vowel\n");
         break;
          case 'e':
         printf("It is a Vowel\n");
         break;
         case 'i':
         printf("It is a Vowel\n");
         break;
         case 'o':
         printf("It is a Vowel\n");
         break;
         case 'u':
         printf("It is a Vowel\n");
         break;
         case 'A':
         printf("It is a Vowel\n");
         break;
         case 'E':
         printf("It is a Vowel\n");
         break;
         case 'I':
         printf("It is a Vowel\n");
         break;
         case 'O':
         printf("It is a Vowel\n");
         break;
         case 'U':
         printf("It is a Vowel\n");
         break;
         default:
         printf("It is a Consonant\n");
     }
     return 0;
}