#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si ,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
    }

int main(){
int arr[7]={1,23,28,56,4,23,1};
int n=7;
int k=3;//k=51.
k=k%n;
//steps to rotate arrays.
reverse(arr,0,n-1);
reverse(arr,0,k-1);
reverse(arr,k,n-1);
for(int i=0;i<7;i++){
    printf("%d ",arr[i]);
}

    return 0;
}