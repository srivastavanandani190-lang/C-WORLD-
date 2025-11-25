#include<stdio.h>

void fun(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main(){
    int arr[2]={12,13};
    printf("%d %d\n",arr[0],arr[1]);

    fun(arr);//PASS BY REFRENCE.
/*when we pass an arrays as an arguments to a function then address of the first element
of the array is passed.*/

    printf("%d %d\n",arr[0],arr[1]);

    return 0;
}