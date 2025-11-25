#include<stdio.h>
int main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    if (n>99 && n<1000){
        printf("NUMBER n IS THREE DIGIT NUMBER");

    }
    else {
        printf("NUMBER n IS NOT THREE DIGIT NUMBER");
    }
    return 0; 
}