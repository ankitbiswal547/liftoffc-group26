#include<stdio.h>

 int main(){
     int row,col,size;
     
     printf("Enter the size number:\n");
     scanf("%d",&size);
     for(int row=0;row<=size;row++)

     {
         for(int col=0;col<=(size-1);col++)
         {
             if(row==col||col==(size-row-1))//logic for same row and column 5-1-1=5
             {
             printf("*");
         }
         else{
            printf(" ");
         }
     }
     printf("\n");
    }
     return 0;
}