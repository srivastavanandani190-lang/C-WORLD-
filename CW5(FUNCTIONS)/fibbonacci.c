#include<stdio.h>
int fibonacci(int x){
    if(x==2 || x==1) {
        return 1;
    }
      return fibonacci(x-1)+fibonacci(x-2);
}
//1,1,2,3,5,8,13,21,34,55,89,144.......
//euler tour tree.
int main(){
    int n;
    printf("ENTER THE VALUE OF n = ");
    scanf("%d",&n);
    printf("THE %d TERM of FIBONACCI SERIES = %d",n,fibonacci(n));
    
return 0;
}