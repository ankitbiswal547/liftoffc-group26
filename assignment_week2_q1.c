#include<stdio.h>

int main(){
int num,rem,sum=0;
printf("Enter a number\n");
scanf("%d",&num);
int y=num;
while(num!=0){
    rem=num%10;
    sum+=rem;
    num/=10;
}
printf("The sum of digits of %d is %d\n",y,sum);
return 0;
}