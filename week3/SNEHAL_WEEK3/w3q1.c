#include<stdio.h>
int square(int n){
    int d;
    d=n*n;
    return d;
}
int main(){
int num;
printf("Enter a number\n");
scanf("%d",&num);
int sq=square(num);
printf("The square of the number is %d\n",sq);
return 0;
}