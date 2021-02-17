#include <stdio.h>

int main()
{
   int m1,m2,m3,m4,m5;
   float sum,percent;
   printf("enter physics,chemistry,maths,biology,maths mark(out of 100): ");
   scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
   sum =(m1+m2+m3+m4+m5);
   percent=(sum/500)*100;
   printf("\nthe percentage secured is: %.2f\n",percent);
   if(percent >= 90)
    {
        printf("Grade A");
    }
    else if(percent >= 80)
    {
        printf("Grade B");
    }
    else if(percent >= 70)
    {
        printf("Grade C");
    }
    else if(percent >= 60)
    {
        printf("Grade D");
    }
    else if(percent >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
