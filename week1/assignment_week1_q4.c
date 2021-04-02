#include<stdio.h>
int main(){
    int phy,che,bio,math,comp;
    float per;
    printf("Enter the mark in physics\n");
    scanf("%d",&phy);
    printf("Enter the mark in chemistry\n");
    scanf("%d",&che);
    printf("Enter the mark in biology\n");
    scanf("%d",&bio);
    printf("Enter the mark in mathematics\n");
    scanf("%d",&math);
    printf("Enter the mark in computer\n");
    scanf("%d",&comp);
    per=(phy+che+bio+math+comp)/500.00;
    float fin=per*100;
    if(fin>=90){
        printf("Percentage is %0.2f and GRADE A\n",fin);
    }
    else if(fin>=80){
        printf("Percentage is %0.2f and GRADE B\n",fin);  
    }
    else if(fin>=70){
        printf("Percentage is %0.2f and GRADE C\n",fin);
    }
    else if(fin>=60){
        printf("Percentage is %0.2f and GRADE D\n",fin);
    }
    else if(fin>=40){
        printf("Percentage is %0.2f and GRADE E\n",fin);
    }
    else if(fin<40){
        printf("Percentage is %0.2f and GRADE F\n",fin);
    }

    return 0;
}