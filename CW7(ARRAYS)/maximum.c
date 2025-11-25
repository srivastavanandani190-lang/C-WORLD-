#include<stdio.h>
//#include<limits.h>
int main(){
int arr[4];
for(int i=0;i<4;i++){
    printf("ENTER THE %d ELEMENT ->",i);
    scanf("%d",&arr[i]);    
    
}
for(int i=0;i<4;i++){
    printf("arr[%d]=%d ",i,arr[i]);
}
//int max=INT_MIN;(sabse chhota number)
//int->4bytes->4*8bits=32bits(range of integer power(2,32) to {power(2,32)-1})

int max=arr[0];
for(int i=0;i<4;i++){
if(max<arr[i]){
max=arr[i];
}
}
printf("\n THE maximum elements in a given array  = %d",max);
    return 0;
}