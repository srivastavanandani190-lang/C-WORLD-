#include<stdio.h>
int power(int a,int b){
    if(b==0){//base condition.
        return 1;
    }
    return a*power(a,b-1);//recurssion relation(not using loop).
}
int main(){
    int n,m;
    printf("ENTER THE BASE n =");
    scanf("%d",&n);
    printf("ENTER THE power m =");
    scanf("%d",&m);
    
    printf("%d is raised to %d -> %d",n,m,power(n,m));

    return 0;
}