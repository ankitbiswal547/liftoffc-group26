#include<stdio.h>
int lcm(int a,int b,int max){
    if(max%a==0&&max%b==0){
        return max;
    }
    else{
        max++;
        return lcm(a,b,max);
    }
}
int hcf(int m,int n){

    if(n!=0){
        return hcf(n,m%n);
    }
    else{
        return m;
    }
}
int main(){
int num1,num2,max;
printf("Enter two numbers\n");
scanf("%d %d",&num1,&num2);
max=num1>num2?num1:num2;
printf("LCM of %d and %d is %d\n",num1,num2,lcm(num1,num2,max));
printf("HCF of %d and %d is %d\n",num1,num2,hcf(num1,num2));
return 0;
}