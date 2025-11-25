#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("number of terms of gp:");
    scanf("%d",&n);

    for(float i=100 ; i>=100*(pow(0.5,n-1)) ;i=i*0.5){
        printf("%.2f ",i);
    }
    return 0;
}//loop ke ander jo bhi hoga repeat hoga!