#include<stdio.h>
int add(int a,int b){//local arguments.(hold value of actual argument)
    return a+b;
}
// int(mention before function name indicates)->return type(integer return to OS).
//if char then character is returned.

int main(){
    int a,b;//actual arguments.
    printf("ENTER THE VALUE OF a = ");
    scanf("%d",&a);
    printf("ENTER THE VALUE OF b = ");
    scanf("%d",&b);
    int sum=add(a,b);//function call;(return value is displayed).
    printf("%d",sum);

    return 0;
}