#include<stdio.h>
//TRIPLET.
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
int totaltriplet=0;
for(int i=0;i<6;i++){
    for(int j=i+1;j<6;j++){
        for(int k=j+1;k<6;k++){
        if((arr[i]+arr[j]+arr[k])==x){
            totaltriplet++;
printf("\n(%d,%d,%d)",arr[i],arr[j],arr[k]);
    }
}
    }
}
printf("THE NUMBER OF TRIPLETS WHOSE SUM EQUAL TO %d -> %d",x,totaltriplet);

return 0;
}