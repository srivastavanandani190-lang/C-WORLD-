#include<stdio.h>
//I DID IT!
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
    return;
}
int main(){
int arr[7];//={1,2,3,56,3,2,1};
printf("ENTER THE ELEMENTS OF ARRAYS:\n");
for(int i=0;i<=6;i++){
    scanf("%d",&arr[i]);
}
reverse(arr);
for(int i=0;i<=6;i++){
    printf("%d ",arr[i]);
}
int count=0;
for(int i=0,j=6;i<j;i++,j--){
if(arr[i]!=arr[j]){
    count=1;
    break;
}
}
if(count==0){
    printf("yes pallindrome");
}
else{
    printf("not pallindrome");
}
    return 0;
}
