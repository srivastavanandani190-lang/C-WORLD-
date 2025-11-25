#include<stdio.h>
int main(){
//i++ post increment
//++i pre increment

//i-- post decrement
//--i pre decrement
int x=5;
printf("%d\n",x);//x=5
printf("%d\n",x++);//op-5;final x=6
printf("%d\n",++x);//op-x=6+1 
printf("%d\n",x--);//op-x=7;final x=6 
printf("%d\n",--x);//op-x=6-1=5

    return 0;
}