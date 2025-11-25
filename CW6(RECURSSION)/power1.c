#include<stdio.h>
//logarithmic method.
int power(int a,int b){
    if(b==1){//base condition.
        return a;
    }
    int x=power(a,b/2);
    if(b%2==0) {
        return  x*x;
    }
else return a*x*x;
}
//recurssion relation(not using loop).
//this reduces the load of system (number of calls of function).

int main(){
    int n,m;
    printf("ENTER THE BASE n =");
    scanf("%d",&n);
    printf("ENTER THE power m =");
    scanf("%d",&m);
    
    printf("%d is raised to %d -> %d",n,m,power(n,m));

    return 0;
}