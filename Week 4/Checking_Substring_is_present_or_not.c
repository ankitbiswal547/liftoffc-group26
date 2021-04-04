#include <stdio.h>
void main()
{
	char str[80],search[20];	
	int c1=0,c2=0,i,j,flag;
	
       printf("\n\nCheck whether a given  substring is present in the given string :\n");
    
	

        printf("Input the string : ");
        fgets(str, sizeof str, stdin);

	printf("Input the substring to be search : ");
	fgets(search, sizeof search, stdin);

	while (str[c1]!='\0')
		c1++;
                c1--;

	while (search[c2]!='\0')
		c2++;
                c2--;


	for(i=0;i<=(c1-c2);i++)
	{ 
		for(j=i;j<(i+c2);j++)
		{
			flag=1;
			if (str[j]!=search[j-i])
			{
				flag=0;
			   break;
			}
		}
		if (flag==1)
			break;
	}
	if (flag==1)
		printf("The substring exists in the string.\n");
	else
		printf("The substring is not exists in the string. \n");
}
