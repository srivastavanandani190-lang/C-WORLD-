#include<stdio.h>
//extra parameters.
/*function(){
base code
code
recurssive call
code (reverse recurssion).
return
}*/
void increasing(int x,int n){
    if(x>n) return;
    printf("%d\n",x);
    increasing(x+1,n);
    return;
}

int main(){
    int n;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    increasing(1,n);

return 0;

}
