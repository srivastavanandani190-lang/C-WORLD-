#include<stdio.h>
int main(){
int arr[7]={25,35,62,14,16,12,45};
for(int i=0;i<7;i++){
    if(arr[i]<35){
        printf("%d ",i);
    }
}
return 0;
}