#include<stdio.h>
#include<string.h>
int main(){
char no[100];
int len,count=0;
printf("Enter the word\n");
gets(no);
len=strlen(no);
for(int i=0;i<len;i++){
    if(no[i]==32){
        count++;
    }
}
printf("the no of words are %d\n",count+1);
return 0;
}