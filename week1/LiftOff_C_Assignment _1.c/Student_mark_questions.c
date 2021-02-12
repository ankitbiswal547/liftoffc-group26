//WAP TO INPUT MARKS OF 5 SUBJECTS P,C,M,B,C Calculate the percentage according to the following
#include<stdio.h>

 int main(){
     int phy,chem,maths,bio,computer;
     float total;
     //float avg;
     float percentage;
     printf("Enter the marks of Physics:\n");
     scanf("%d",&phy);
     printf("Enter the marks of Chemistry:\n");
     scanf("%d",&chem);
     printf("Enter the marks of Biology:\n");
     scanf("%d",&bio);
     printf("Enter the marks of Mathematics:\n");
     scanf("%d",&maths);
     printf("Enter the marks of Computer:\n");
     scanf("%d",&computer);
      total =phy+chem+bio+maths+computer;
      percentage = (total/500)*100;
     printf("Total marks is %f\n",total);
     printf("Percentage of mark is %f\n",percentage);
     if(percentage >=0.90)
     {
         printf("Your Grade is A\n" );
     }
     if(percentage >=0.80)
     {
         printf("Your Grade is B\n"  );
     }if(percentage >=0.70)
     {
         printf("Your Grade is C\n" );
     }if(percentage >=0.60)
     {
         printf("Your Grade is D\n" );
     }if(percentage >=0.40)
     {
         printf("Your Grade is E\n" );
     }
     if(percentage <0.40)
     {
         printf("Your Grade is F\n" );
     }
     
        
      
     
     

     
     return 0;
}