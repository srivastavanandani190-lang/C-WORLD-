#include<stdio.h>

int main(){
int x,y;
printf("ENTER THE VALUE OF x = ");
scanf("%d",&x);
printf("ENTER THE VALUE OF y = ");
scanf("%d",&y);
printf("x = %d ; y = %d\n",x,y);

int temp=x;
x=y;
y= temp;
printf("after swapping -> x = %d ; y = %d",x,y);

    return 0;
}