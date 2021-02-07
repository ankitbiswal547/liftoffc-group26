//Write a C program to check whether an alphabet is vowel or consonant using switch case.
#include<stdio.h>
int main()
{
printf("\t\tC program to check whether an alphabet is vowel or consonant using switch case.\n");
printf("\t\t-------------------------------------------------------------------------------\n");

char x;
printf("\t\tENTER THE ALPHABET: ");
scanf("%c",&x);
printf("\n");
 switch(x)
    {
        case 'a':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'e':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'i':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'o':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'u':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'A':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'E':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'I':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'O':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        case 'U':
            printf("\t\tTHE ENTERED ALPHABET IS VOWEL");
            break;
        default:
            printf("\t\tTHE ENTERED ALPHABET IS CONSONANT");
    }
     printf("\n\n\n");
return 0;
}
