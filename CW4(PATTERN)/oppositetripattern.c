#include<stdio.h>
int main(){
int n;
printf("ENTER THE VALUE OF n=");
scanf("%d",&n);
 for (int i=1;i<=n;i++){// i is taken as number of rows conventionally
    for (int j=1; j<=n+1-i; j++)// j is taken as number of columns conventionally
    {
        printf("*");
    }
    printf("\n");
 }
    return 0;
}
/* j      n(i)
   5***** 1   sum=i+j=n+1
   4****  2        j=n+1-i
   3***   3
   2**    4
   1*     5




*/