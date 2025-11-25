#include<stdio.h>
int main(){
    int n;
    printf("THE VALUE OF n:");
    scanf("%d",&n);
    if (n%5==0){
        printf(" %d IS DIVISIBLE BY 5 ",n);
        }//if (n%2!=0){
       // printf("%d is odd number");}
    else{
        printf(" %d IS NOT DIVISIBLE OF 5",n);
    }
    return 0;
}