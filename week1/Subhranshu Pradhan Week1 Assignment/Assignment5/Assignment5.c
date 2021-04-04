#include<stdio.h>
#include<ctype.h>
int main()
{
	char ltr;
	printf("Enter a Letter\n");
	scanf("%c",&ltr);
	switch (tolower(ltr)) 
	{
		case 'a':
		    printf("The letter is a Vowel");
		    break;
		case 'e':
		    printf("The letter is a Vowel");
		    break;
		case 'i':
		    printf("The letter is a Vowel");
		    break;
		case 'o':
		    printf("The letter is a Vowel");
		    break;
		case 'u':
		    printf("The letter is a Vowel");
		    break; 
		default:
			printf("The letter is a Consonant");
			break;
	}
	return 0;
}
