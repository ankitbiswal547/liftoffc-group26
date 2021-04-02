#include<stdio.h>
int facto(int h){
    if(h==0||h==1){
        return 1;
    }
    else{
        return h*facto(h-1);
    }
}
int main(){
int n;
printf("Enter the number whose factorial you want to calculate\n");
scanf("%d",&n);
printf("The factorial of %d is %d\n",n,facto(n));
return 0;
}