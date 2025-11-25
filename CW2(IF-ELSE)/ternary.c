#include<stdio.h>
int main(){
//ternary operator
int n;
printf("ENTER THE VALUE OF n:");
scanf("%d",&n);
(n%2==0) ? printf("%d is EVEN NUMBER",n) : printf("%d IS ODD NUMBER",n);

    return 0;
}