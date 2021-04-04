#include<stdio.h>
#include<string.h>

 int main(){
     int i,word=0;
     char str[100];
     printf("Enter the string:\n");
     scanf("%s.acn",&word);
     for(int i=0;str[i];i++)
     {
         if(str[i]==' '&&str[i+1]!='\n')
         {            
              word++;
         }
         i++;
        
     }
      printf("No of words:%d",str[i]);
     return 0;
}