#include<stdio.h>
int main(){
int n;
printf("ENTER THE VALUE OF n=");
scanf("%d",&n);
 for (int i=1;i<=n;i++){// i is taken as number of rows conventionally
    for (int j=1; j<=i; j++)// j is taken as number of columns conventionally
    {//j<=i just indicates the num of elements in a n num of rows
        printf("%d ",j*2-1);
    }
    printf("\n");
 }
    return 0;
}