#include <stdio.h>

int main()
{
    int i, j;
   for(i=0; i<5;i++)
    {
        for(j=0; j<5;j++)
        {
            if((i+j)==4||(i==j))
            printf("*");
            else
           printf(" ");
        }
    printf("\n");
    }

    return 0;
}
