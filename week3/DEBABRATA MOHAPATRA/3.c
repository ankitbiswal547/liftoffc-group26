#include <stdio.h>
#include <stdlib.h>

int gcd(int,int);
int main(){
    int a,b,ans,gcd;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    ans=gcd(a,b);
    printf("GCD of the given two numbers is:%d",ans);
    return 0;
}
int gcd(int x,int y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}
