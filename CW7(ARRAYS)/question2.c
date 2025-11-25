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
for(int i=0;i<4;i++){
if(i%2==0) {
    arr[i]=arr[i]+10;
}
else {
arr[i]=arr[i]*2;}
printf("\n arr[%d] = %d",i,arr[i]);
}

    return 0;
}