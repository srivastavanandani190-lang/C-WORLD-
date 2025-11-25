#include<stdio.h>
int main(){
int arr[4];
for(int i=0;i<4;i++){
    printf("ENTER THE %d ELEMENT ->",i);
    scanf("%d",&arr[i]);    
    
}
for(int i=3;i>=0;i--){
    printf("%d ",arr[i]);
}
    return 0;
}