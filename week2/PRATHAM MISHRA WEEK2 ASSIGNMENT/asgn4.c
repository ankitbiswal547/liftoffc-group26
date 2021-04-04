//Write a C program to find the largest and smallest element in an array.
#include<stdio.h>
int main()
{
printf("\n\nC program to find the largest and smallest element in an array.\n");
printf("---------------------------------------------------------------\n");

  int array[20],a,b,max,min;

printf("\nHOW MANY NUMBERS WILL YOUR ARRAY CONTAINS: ");
scanf("%d",&b);

printf("\nENTER THE ELEMENTS OF ARRAY: \n");
for(a=0;a<b;a++)

scanf("%d",&array[a]);

printf("\nELEMENTS OF ARRAY: ");

for(a=0;a<b;a++)
printf("%d  ",array[a]);
min=max=array[0];

for(a=0;a<b;a++)
{
    if(array[a]>max)
    max=array[a];
    if(array[a]<min)
    min=array[a];
}

printf("\nTHE SMALLEST ELEMENT OF ARRAY: %d",min);
printf("\nTHE LARGEST ELEMENT OF ARRAY: %d",max);

return 0;

}



