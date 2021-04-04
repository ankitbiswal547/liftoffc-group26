#include<stdio.h>

int func(int);

int main()
{
int no, square;

printf("\n Enter an no : ");
scanf("%d",&no);

square = func(no);

printf("\n Square of no is : %d ", square);

}

int func(int temp)
{
return temp*temp;
}
