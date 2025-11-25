#include<stdio.h>
void reverse(int arr[]){
    int i=0;
    int j=6;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
int arr[7]={1,23,28,56,4,23,1};
//reverse(arr);
for(int i=1,j=4;i<=j;i++,j--){
    int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
}
for(int i=0;i<7;i++){
    printf("%d ",arr[i]);
}

    return 0;
}