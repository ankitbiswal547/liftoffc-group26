#include <stdio.h>
int main()
{
    int num[5]={1,2,3,4,5};
    int p=0,q=0,s=0,o=0,i,j,a,b;

    for(i=0;i<5;i++)
    {
        if(i%2==0)

            s=s+num[i];

        else
            o=o+num[i];

    }
      for(j=0;j<5;j++)
    {

    if(num[j]%2==0)

        p=p+num[j];

    else
        q=q+num[j];
    }
    a=p+s;
    b=q+o;



    printf("total even sum is = %d \n",a);
    printf("total odd sum is = %d \n",b);
}