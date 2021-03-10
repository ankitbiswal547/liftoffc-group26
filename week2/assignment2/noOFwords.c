#include<stdio.h>
#include<string.h>
int main()
{
	char str[100]; int i,c=0;
	printf("ENTER ANY SENTENCE:");
	scanf("%[^\n]s",str);  // [^\n] tab tak input lega jba tak enter na mare user, scanf in space ke baad naya input leta hai. 
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			++c;
		}
	}
	printf("\nNUMBER OF WORD(s) IN YOUR SENTENCE:%d",c+1);
	return 0;
}
