#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("number of terms of gp:");
    scanf("%d",&n);

    for(int i=3;i<=(3*(pow(4,n-1)));i=i*4){
        printf("%d ",i);
    }
    return 0;
}