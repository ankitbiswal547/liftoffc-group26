#include<stdio.h>
int main()
{
int a,b,sum,sub,mul,div,rem;
printf("input two number");
scanf("%d %d",&a,&b);
sum=a+b;
printf("a+b=%d\n",sum);
sub=a-b;
printf("a-b=%d\n",sub);
mul=a*b;
printf("a*b=%d\n",mul);
div=a/b;
printf("a/b=%d\n",div);
rem=a%b;
printf("remainder when divided by b=%d\n",rem);
}
