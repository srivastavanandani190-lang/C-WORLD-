#include<stdio.h>
int main(){
int n;
printf("ENTER THE NUMBER OF ROWS AND COLUMNS=");
scanf("%d",&n);

for (int i=1; i<=n; i++)
{
    for (int i=1; i<=n; i++)
    {
        printf("*");
    }
     printf("\n");// har line ke baad enter marne ke liye hai
}
    return 0;
}