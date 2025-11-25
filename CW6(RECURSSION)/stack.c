//call stack refers to the sequence function is called.
#include<stdio.h>
void preinpost(int n){
    if(n==0) return;
    printf("PRE %d\n",n);
    preinpost(n-1);
    printf("IN %d\n",n);
    preinpost(n-1);
    printf("POST %d\n",n);
    return;
}
int main(){
int n;
printf("ENTER THE VALUE OF n =");
scanf("%d",&n);
preinpost(n);

    return 0;
}