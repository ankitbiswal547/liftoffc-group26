#include<stdio.h>

 int main(){
     int arr[50],largest,smallest,i,size;
     printf("Enter the size of elements:\n");
     scanf("%d",&size);
     printf("Enter the number of array elements:\n");
     for(int i=0;i<size;i++)
     {
         scanf("%d",&arr[i]);
     }
      largest=arr[0];//the array elements should start with zero index 
     for(int i=1;i<size;i++)
     {
         if(largest<arr[i])
         {
         largest=arr[i];
         }
     }
     smallest=arr[0];
     for(int i=1;i<size;i++)
     {
         if(smallest>arr[i])
         {
             smallest=arr[i];
         }
     }
     printf("The largest elements in th array is %d\n",largest);
     printf("The smallest elements in the array is %d\n",smallest);
     return 0;
}