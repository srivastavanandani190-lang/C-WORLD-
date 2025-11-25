#include<stdio.h>
int main(){
int arr[4];
for(int i=0;i<4;i++){
    printf("ENTER THE %d ELEMENT ->",i);
    scanf("%d",&arr[i]);    
    
}
for(int i=0;i<4;i++){
    printf("arr[%d]=%d ",i,arr[i]);
}
int sum=0;
for(int i=0;i<4;i++){
sum=sum+arr[i];
}
printf("\n THE SUM OF ELEMENTS = %d",sum);
    return 0;
}