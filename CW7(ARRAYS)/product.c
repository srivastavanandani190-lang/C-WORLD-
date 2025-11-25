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
int product=1;
for(int i=0;i<4;i++){
product=product*arr[i];
}
printf("\n THE PRODUCT OF ELEMENTS = %d",product);
    return 0;
}