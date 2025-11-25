#include<stdio.h>
int main(){
    int a,b,c;
    printf("THE VALUE OF a:");
    scanf("%d",&a);
       printf("THE VALUE OF b:");
    scanf("%d",&b);
       printf("THE VALUE OF c:");
    scanf("%d",&c);
    if (a+c>b && c+b>a && a+b>c){
        printf("YES TRIANGLE IS POSSIBLE");
        }
    else {
             printf("NOT POSSIBLE");
    }
    return 0;
}
    