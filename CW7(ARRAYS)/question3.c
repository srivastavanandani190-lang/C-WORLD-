#include<stdio.h>
int main(){
int arr[4];
int x;
printf("ENTER THE VALUE OF x =");
scanf("%d",&x);

for(int i=0;i<4;i++){
    printf("ENTER THE %d ELEMENT ->",i);
    scanf("%d",&arr[i]);    
    
}
for(int i=0;i<4;i++){
    printf("arr[%d]=%d ",i,arr[i]);
}
int count=0;
for(int i=0;i<4;i++){
    if(arr[i]>x){
        count++;
    }
}
printf("\nTHE NUMBER OF ELEMENTS GREATER THAN %d -> %d",x,count);

return 0;
}