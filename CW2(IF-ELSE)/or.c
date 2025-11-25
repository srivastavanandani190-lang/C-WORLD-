#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if (n%5==0 || n%3==0)
{
    printf("NUMBER %d is divisible by 5 or 3",n);
}   
else {
    printf("NUMBER %d is not divisible by 5 or 3",n);
}
 return 0;
}