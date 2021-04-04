#include <stdio.h>
#include <stdlib.h>

int main()
{
    float p,c,m,b,s,i,q;
    printf("ENTER THE MARKS FOR PHYSICS ");
    scanf("%f",&p);

    printf("ENTER THE MARKS FOR CHEMISTRY ");
     scanf("%f",&c);
           printf("ENTER THE MARKS FOR BIOLOGY ");
            scanf("%f",&b);
    printf("ENTER THE MARKS FOR COMPUTER ");
     scanf("%f",&i);
                         printf("ENTER THE MARKS FOR MATHEMATICS ");
                          scanf("%f",&m);
                          s=p+c+b+m+i;
                printf("THE TOTAL MARKS IS %f \n",s);
                q=s/500*100;
                printf("YOUR PERCENTAGE IS %f \n",q);
                if(q>=90)
                {
                  printf("GRADE A");
                }
                else if(q>=80&&q<90)
                {
                     printf("GRADE B");
                }
                else if(q>=70&&q<80)
                {

                     printf("GRADE c");
                }
                else if(q<=60&&q>70)
                {

                     printf("GRADE D");
                }
                else if(q<=40&&q>60)
                {
                     printf("GRADE E");
                }
                else
                {
                     printf("GRADE f");
                }




}
