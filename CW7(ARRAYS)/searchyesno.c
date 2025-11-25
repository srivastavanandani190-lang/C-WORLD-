#include<stdio.h>
//#include<stdbool.h>
//linear search.
int main(){
int arr[]={12,13,56,8,9,7,4,6};
int x;
printf("SEARCH x:");
scanf("%d",&x);
int check=0;//bool flag=false;
int idx=0;
for(int i=0;i<8;i++){
    if(arr[i]==x){
        check=1;//flag=true.
        idx=i;
        break;
    }
}
if(check==0){//flag==false
    printf("%d IS NOT PRESENT IN ARRAY",x);
}
else{
    printf("%d is present in array at index %d",x,idx);
}
    return 0;
}