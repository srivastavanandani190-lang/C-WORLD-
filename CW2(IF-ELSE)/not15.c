#include<stdio.h>
int main(){//NESTED IF-ELSE
    int n;
    printf("ENTER THE VALUE OF n:");
    scanf("%d",&n);
    if (n%5==0 || n%3==0){
        if(n%15!=0){
            printf("number n is divisible by 5 or 3 not by 15");
        }
       else { printf("number n is divisible by 15");
    }
    }
    else {
        printf("number n is not divisible by 5 or 3");
    }
    return 0;
}