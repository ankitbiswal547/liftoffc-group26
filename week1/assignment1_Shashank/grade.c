#include<stdio.h>
void main()
{
	int p,c,b,m,com;
	float per,a;
	printf("ENTER MARKS IN PHYSICS:");
	scanf("%d",&p);
	printf("\nENTER MARKS IN CHEMISTRY:");
	scanf("%d",&c);
	printf("\nENTER MARKS IN BIOLOGY:");
	scanf("%d",&b);
	printf("\nENTER MARKS IN MATHS:");
	scanf("%d",&m);
	printf("\nENTER MARKS IN COMPUTER:");
	scanf("%d",&com);
	a=p+c+b+m+com;
	per=(a/5);  
	printf("YOUR PERCENTAGE:%f\n",per);
	if(per>=90)
	printf("GRADE A");
	if(per>=80 && per<90)
	printf("GRADE B");
	if(per>=70 && per<80)
	printf("GRADE C");
	if(per>=60 && per<70)
	printf("GRADE D");
	if(per>=40 && per<60)
	printf("GRADE E");
	if(per<40)
	printf("GRADE F");

}
