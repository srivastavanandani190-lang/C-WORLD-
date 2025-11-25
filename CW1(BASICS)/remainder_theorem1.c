#include<stdio.h>
int main(){
int a,b;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
int r;
int q=a/b;
r=a-(b*q);
printf("THE REMAINDER WHEN a divided by b is %d",r);
//a is dividened , b is divisor , q is quotient, r is remainder
    return 0;
}