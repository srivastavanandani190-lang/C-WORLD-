#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("number of terms of gp:");
    scanf("%d",&n);

    for(int i=1;i<=pow(2,n-1);i=i*2){
        printf("%d ",i);
    }
    return 0;
}