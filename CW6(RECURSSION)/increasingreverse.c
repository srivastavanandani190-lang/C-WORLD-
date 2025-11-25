#include<stdio.h>
void increasing(int x){
    if(x==0) return;
    increasing(x-1);//phale hi call laga diya hence result printf will be excuting from last to first.
    printf("%d\n",x);//reverse recurssion call.
    return;
}
int main(){
    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    increasing(n);
return 0;
}
