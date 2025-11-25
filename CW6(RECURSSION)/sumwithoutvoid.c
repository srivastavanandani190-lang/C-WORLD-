#include<stdio.h>
int sum(int x){
    if(x==1){//base condition.
        return 1;
    }
    return x+sum(x-1);//recurssion relation(not using loop).
}
int main(){
    int n;
    printf("ENTER THE NUMBER =");
    scanf("%d",&n);
    printf("THE SUM till %d -> %d",n,sum(n));

    return 0;
}