#include<stdio.h>

 int main(){
     int i,num,rem,sum=0;
     printf("Please Enter the number:\n");
     scanf("%d",&num);
     for(int i=1;i<num;i++)
     {
          rem=num%i;
          num=num/10;
          if(rem==0)
          {
         
             sum=sum+i;
          }
     }
         
         if(sum==num)
         {
             printf("Yes %d is a perfect number.",num);
         }
         else{
             printf("No %d is not a perfect number.",num);
         }
     
     return 0;
}