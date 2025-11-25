#include<stdio.h>
int main(){
    int n;
    printf("THE VALUE OF n:");
    scanf("%d",&n);
    if (n%2==0){
        printf(" %d IS EVEN NUMBER",n);
        }//if (n%2!=0){
       // printf("%d is odd number");}
    else{
        printf(" %d is odd NUMBER",n);
    }
    return 0;
}