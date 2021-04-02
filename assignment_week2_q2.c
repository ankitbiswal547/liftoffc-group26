#include<stdio.h>
int main(){
    int no,sum=0,sum1=0;
    printf("enter the no of elements of your array\n");
    scanf("%d",&no);
    int arr[no];
    for(int i=0;i<no;i++){
        printf("Enter the element at position %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        if((i+1)%2==0){
            sum+=arr[i];
        }
        if(arr[i]%2==0){
            sum1+=arr[i];
        }
    }
    printf("sum of all even elements is %d\n",sum1);
    printf("sum of all even position elements is %d\n",sum);
    printf("total sum is %d\n",sum+sum1);
    return 0;
}