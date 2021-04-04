#include <stdio.h>
#include <string.h>
int main()
{
    char sen[100];
    int i,c=1,j;
    printf("ENTER THE SENTENCE ");
    scanf("%[^\n]s",&sen);
    for(i=0;i<=99;i++)
    {
        if((sen[i]==' ')&&(sen[i+1] !=' '))
        c++;
    }
    printf("NO. OF WORDS IN THE SENTENCE IS %d",c);
}