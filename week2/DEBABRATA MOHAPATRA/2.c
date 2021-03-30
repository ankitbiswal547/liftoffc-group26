#include<stdio.h>
#include<stdlib.h>

main()
{
    int a[10],i,sum=0,pos=0;
    printf("Enter upto 5 Values: ");
    for(i=0; i<5; i++)
    scanf("%d",&a[i]);
    for(i=0; i<5; i++)
    {
        if(a[i]%2==0)
	{
        sum=sum+a[i];
        pos=pos + i;
	}
    }

    printf("Total Sum of Even elements is: %d ",sum);
    printf("\nTotal Sum of Even position elements is: %d ",pos);

}
