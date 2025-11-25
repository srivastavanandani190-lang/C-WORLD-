//array stores numbers of variables of same type that occupies continous memory space/location.
#include<stdio.h>

int main(){
int arr[]={25,26,27,28};
//dabbe create hogaye.
//decalaration + initialisation of array.
//elements of arrays are identified using index.
//index(0 to n-1).
arr[1]=5;//updation.
for(int i=0;i<4;i++){
    printf("%d\n",arr[i]);
}
    return 0;
}