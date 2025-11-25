#include<stdio.h>
int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
    
    int n,r;
    printf("ENTER THE VALUE OF n = ");
    scanf("%d",&n);
    printf("ENTER THE VALUE OF r = ");
    scanf("%d",&r);

printf("COMBINATION = %d",factorial(n)/(factorial(r)*factorial(n-r)));

    return 0;
}