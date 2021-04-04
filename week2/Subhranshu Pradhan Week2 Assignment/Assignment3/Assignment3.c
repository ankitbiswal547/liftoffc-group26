#include<stdio.h>
void main()
{
	char str[500];
	int count=0,i;
	
	printf("Enter a line :\n");
	scanf("%[^\n]s",str);
	for(i=0;str[i];i++)
	{
		if(str[i]==' '&&str[i+1]!=' ')
		{
			count++;
		}
	}
	printf("Number of words in the line is: %d",count+1);
}
