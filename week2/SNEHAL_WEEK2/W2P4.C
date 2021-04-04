#include <stdio.h>
int main()
{
    int a[7];
    int i,j,max,min;
    printf("ENTER 7 NUMBERS \n");
    
        for(i=0;i<=6;i++)
        {
    scanf("%d",&a[i]);

        }
        max=min=a[0];
          for(j=0;j<=6;j++)
          {
              if(a[j]>max)
              max=a[j];
              if(a[j]<min)
              min=a[j];
        
          }
          printf("THE LARGEST ELEMENT IS %d\n",max);
          printf("the smallest element is %d\n",min);
          // for(j=0;j<=9;j++)
          
             
            //  printf("THE SMALLEST ELEMENT IS %d\n",a[i]);

        
          
    }



