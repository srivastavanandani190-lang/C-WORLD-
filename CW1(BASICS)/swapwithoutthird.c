#include<stdio.h>
int main(){
    
int a,b;
printf("ENTER THE VALUE OF a =");
scanf("%d",&a);
printf("ENTER THE VALUE OF b =");
scanf("%d",&b);
a=a+b;
b=a-b;
a=a-b;
printf("a = %d;b = %d",a,b);

    return 0;
}