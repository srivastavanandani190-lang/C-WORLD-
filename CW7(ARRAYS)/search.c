#include<stdio.h>
int main(){
int arr[]={12,13,56,8,9,7,4,6};
int x;
printf("SEARCH x:");
scanf("%d",&x);
for(int i=0;i<8;i++){
    if(arr[i]==x){
        printf("Yes %d is present at index %d in given array.",x,i);
        break;//without search reptition.
    }
}
    return 0;
}