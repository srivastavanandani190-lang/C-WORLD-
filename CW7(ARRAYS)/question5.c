#include<stdio.h>
//pairs.
int main(){
int arr[6];
int x;
printf("ENTER THE VALUE OF x =");
scanf("%d",&x);

for(int i=0;i<6;i++){
    printf("ENTER THE %d ELEMENT ->",i);
    scanf("%d",&arr[i]);    
    
}
for(int i=0;i<6;i++){
    printf("arr[%d]=%d ",i,arr[i]);
}
int totalpairs=0;
for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
        if((arr[i]+arr[j])==x){
            totalpairs++;
printf("\n(%d,%d)",arr[i],arr[j]);
    }
    }
}
printf("THE NUMBER OF PAIRS WHOSE SUM EQUAL TO %d -> %d",x,totalpairs);

return 0;
}