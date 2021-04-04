/*Write a C program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade according to
following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F*/

#include<stdio.h>
int main()
{
    printf("\t\tWrite a C program to input marks of five subjects Physics, Chemistry, Biology,Mathematics and Computer.\n\t\tCalculate percentage and grade according tofollowing:\n\t\tPercentage >= 90% : Grade A\n\t\tPercentage >= 80% : Grade B\n\t\tPercentage >= 70% : Grade C\n\t\tPercentage >= 60% : Grade D\n\t\tPercentage >= 40% : Grade E\n\t\tPercentage < 40% : Grade F\n");

printf("\t\t-------------------------------------------------------------------------------------------------------\n");

double a,b,c,d,e,f;
printf("\t\tENTER THE PHYSICS MARKS: ");
scanf("%lf",&a);
printf("\t\tENTER THE CHEMISTRY MARKS: ");
scanf("%lf",&b);
printf("\t\tENTER THE BIOLOGY MARKS: ");
scanf("%lf",&c);
printf("\t\tENTER THE MATHEMATICS MARKS: ");
scanf("%lf",&d);
printf("\t\tENTER THE COMPUTER MARKS: ");
scanf("%lf",&e);
printf("\n");
f=(a+b+c+d+e)/500*100;
printf("\t\tTOTAL PERCENTAGE = %.2lf\n\n",f);
if(f>=90)
    printf("\t\tGRADE = A ");
else if(f>=80)
    printf("\t\tGRADE = B ");
else if(f>=70)
    printf("\t\tGRADE = C ");
else if(f>=60)
    printf("\t\tGRADE = D ");
else if(f>=50)
    printf("\t\tGRADE = E ");
else
    printf("\t\tGRADE = F ");
    printf("\n\n\n");
return 0;
}

