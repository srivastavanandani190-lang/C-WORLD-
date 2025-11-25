#include<stdio.h>
int main(){
int arr[100];
int n;
int flag=0;
int i,index;
printf("enter the elements of arr:\n");
for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("ARRAY:\n");
for( i=0;i<5;i++){
    printf("%d ",arr[i]);
}
printf("enter the searching item:");
scanf("%d",&n);

for(int i=0;i<3;i++){
    if(n==arr[i]){
     flag=1;
     index=i; 
     break;
    }
}
if(flag==1) printf("\nELEMENT FOUND AT %d",index);
else printf("NOT FOUND");

    return 0;
}