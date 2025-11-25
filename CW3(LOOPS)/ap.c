#include<stdio.h>
int main(){
    int n;
    printf("number of terms of ap:");
    scanf("%d",&n);

    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }//int i=1 initialisation
    //i<=2n-1 indicates the last value of ap with given n value
    //i=i+2 indicates difference of a.p
    return 0;
}