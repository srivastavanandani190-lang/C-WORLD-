#include<stdio.h>

void func(int arr[]){
    arr[0]=10;
    return;
}
int main(){
    int arr[4]={12,13,45,17};
    printf("%d\n",arr[0]);

    func(arr);//PASS BY REFRENCE.
    printf("%d\n",arr[0]);

    return 0;
}