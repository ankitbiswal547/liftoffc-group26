#include<stdio.h>
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
long long int num;
printf("Enter the number whose factorial you want to calculate\n");
scanf("%d",&num);
printf("The factorial of %d is %d\n",num,factorial(num));
return 0;
}