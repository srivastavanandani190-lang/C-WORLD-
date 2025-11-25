#include<stdio.h>
int main(){//same for four number case
    int a,b,c;
    printf("THE VALUE OF a:");
    scanf("%d",&a);
       printf("THE VALUE OF b:");
    scanf("%d",&b);
       printf("THE VALUE OF c:");
    scanf("%d",&c);
    if (a>b && a>c){
        printf("a is greater among all");
        }
    else if (b>c && b>a){
        printf("b is greater among all");
    }
    else {
             printf("c is greater among all");
    }
    return 0;
}