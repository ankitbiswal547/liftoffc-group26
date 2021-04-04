#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int num1,num2,i,c=0;
    printf("Enter a number:\n");
    scanf("%d",&num1);
    printf("Enter the last number:\n");
    scanf("%d",&num2);
    while(num1<=num2)
    {
        for(int i=1;i<=num1;i++)
        {
            if(i*i==num1)
            {
                printf("%d, ",num1);
            }
        }
        num1++;
    }
    return 0;
}
  