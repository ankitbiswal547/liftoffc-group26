#include<stdio.h>

 int main(){
     int size,i,arr[20];
     int sum1,even_Position_sum2=0;
     printf("Enter the size of an array:\n");
     scanf("%d",&size);
     printf("Enter the Array elements:\n");
     for(int i=0;i<size;i++)
     {
         scanf("%d",&arr[i]);
     } 
     for(int i=0;i<size;i++)
     {
         for(int i=0;i<size;i+=2)
         {
         if(arr[i]%2==0)
         {
             sum1=sum1+arr[i];
             even_Position_sum2 =   even_Position_sum2+arr[i];           
             
         }
     }
     printf("Sum of even position elements:%d\n",even_Position_sum2);
     printf("Sum of even elements is %d\n",sum1);
 }

     
     return 0;
 }