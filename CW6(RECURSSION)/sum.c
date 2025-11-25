#include<stdio.h>

void sum(int x,int s){
    if(x==0) {
        printf("%d",s);//at the end you want to display the result stored in s.
        return;}
    sum(x-1,s+x);
    return;
}
int main(){
    int n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    sum(n,0);
return 0;
}
