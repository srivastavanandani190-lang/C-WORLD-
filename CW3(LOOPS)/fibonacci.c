#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
int a=1;
int b=1;
int sum=1;
for (int i=0;i<=n-2;i++){//loop from third term started
    sum=a+b;
    a=b;
    b=sum;
}
printf("THE %dth FIBONACCI TERM IS %d",n,sum);
//fibonacci series -1,1,2,3,5,8,13,21,34,55,89......



    return 0;
}