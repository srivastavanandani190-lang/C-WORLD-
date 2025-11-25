#include<stdio.h>
int main(){
    
int a,b;
printf("ENTER THE VALUE OF a =");
scanf("%d",&a);
printf("ENTER THE VALUE OF b =");
scanf("%d",&b);
int temp=a;
a=b;
b=temp;
printf("a = %d;b = %d",a,b);

    return 0;
}