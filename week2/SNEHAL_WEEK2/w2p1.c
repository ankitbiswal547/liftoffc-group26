#include <stdio.h>
int main()
{
    int i,j,n,s=0,temp,c;
    printf("ENTER THE NUMBER ");
    scanf("%d",&n);
    temp=n;
    
    for(i=1;i<=n;i++)
    {
        c=n%10;
       
        s=s+c;
        n=n/10;
    

    }
    printf("THE SUM OF DIGITS OF THE NUMBER  %d IS %d",temp,s);
}
