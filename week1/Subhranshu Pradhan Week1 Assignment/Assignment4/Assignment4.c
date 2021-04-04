#include<stdio.h>
int main()
{
	int phy,chem,bio,math,comp,total;
	printf("Enter the marks of Physics,Chemistry,Mathematics,Biology and Computer\n");
    scanf("%d %d %d %d %d",&phy,&chem,&math,&bio,&comp);
    total=phy+chem+math+bio+comp;
    float avg = total/5;
    if(avg >= 90)
    {
    	printf("Grade A");
	}
	if(avg < 90 && avg >= 80)
    {
    	printf("Grade B");
	}
	if(avg < 80 && avg >= 70)
    {
    	printf("Grade C");
	}
	if(avg < 70 && avg >= 60)
    {
    	printf("Grade D");
	}
	if(avg < 60 && avg >= 40)
    {
    	printf("Grade E");
	}
	if(avg < 40)
    {
    	printf("Grade A");
	}
	
}
