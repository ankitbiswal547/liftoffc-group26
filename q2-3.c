#include<stdio.h>
int main()
{
    int i, n, sum=0;
   printf("Enter size of the array: ");
    scanf("%d", &n);
 int arr[n];
  printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
     if(i%2==0&&arr[i]%2==0)
     sum = sum + arr[i];
    }

    printf("Sum of even elements at even position: %d",sum);
    return 0;
}
