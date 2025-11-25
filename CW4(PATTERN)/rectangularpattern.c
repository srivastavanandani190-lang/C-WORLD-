#include<stdio.h>
int main(){
int n;
printf("ENTER THE NUMBER OF ROWS=");
scanf("%d",&n);

int m;
printf("ENTER THE NUMBER OF COLUMNS=");
scanf("%d",&m);

for (int i=1; i<=n; i++)
{
    for (int i=1; i<=m; i++)
    {
        printf("*");
    }
     printf("\n");// har line ke baad enter marne ke liye hai
}
    return 0;
}