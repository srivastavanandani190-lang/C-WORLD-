#include<stdio.h>
int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=x*factorial(x-1);
    }
    return f;
}
int main(){
    int n;
    printf("ENTER THE VALUE OF n = ");
    scanf("%d",&n);
    printf("THE FACTORIAL OF %d = %d",n,factorial(n));
    
return 0;
}