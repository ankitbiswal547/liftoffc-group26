#include<stdio.h>

int main(){
    int num;
    printf("enter the no of element of your array\n");
    scanf("%d",&num);
int arr[num];
for(int i=0;i<num;i++){
    printf("Enter element %d of array: \n",i+1);
    scanf("%d",&arr[i]);
}
int min=arr[0],max=arr[0];
for(int i=0;i<num;i++){
    if(min>arr[i]){
        min=arr[i];
}
if(max<arr[i]){
    max=arr[i];
}
}
printf("minimum number is %d\n",min);
printf("maximum number is %d\n",max);
return 0;
}