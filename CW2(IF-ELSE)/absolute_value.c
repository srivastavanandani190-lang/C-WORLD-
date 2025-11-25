#include<stdio.h>6
int main(){
    int n,m;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n<0)
    {
    m=n*(-1);
        printf("ABSOLUTE VALUE OF %d IS %d",n,m);
    }
    else{
        printf("ABSOLUTE VALUE OF %d IS %d",n,n);
    }


    return 0;
}