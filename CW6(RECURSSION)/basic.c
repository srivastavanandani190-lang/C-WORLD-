//Recurssion means calling functions at each step using recurssion relation.
//This goes in a cycle.
//once you reach return functions ends.

#include<stdio.h>
int factorial(int x){
    if(x==1||x==0){//base condition.
        return 1;
    }
    return x*factorial(x-1);//recurssion relation(not using loop).
}
int main(){
    int n;
    printf("ENTER THE NUMBER =");
    scanf("%d",&n);
    
    printf("THE FACTORIAL OF %d -> %d",n,factorial(n));

    return 0;
}