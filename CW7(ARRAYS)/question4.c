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
int evensum=0;
int oddsum=0;
for(int i=0;i<4;i++){
if(i%2==0) {
    evensum= evensum + arr[i];
}
else {
oddsum=arr[i]+oddsum;}
}
printf("\n THE DIFFERENCE OF EVENSUM AND ODDSUM = %d",evensum-oddsum);
    return 0;
}