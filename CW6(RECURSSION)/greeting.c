#include<stdio.h>
void greet(int x){
    if(x==0) return;
    printf("Good morning\n");
    greet(x-1);
    return;
}

int main(){
    int n;
    printf("ENTER THE VALUE OF n = ");
    scanf("%d",&n);
    greet(n);//don't mention void function under printf.
    return 0;
}