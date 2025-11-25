#include<stdio.h>
int main(){
int n;//I DID IT!
printf("ENTER THE VALUE OF n=");
scanf("%d",&n);
for (int i =1; i<=n; i++)
{
    for (int j = 1; j<=i; j++){
      
    if (i%2!=0)
        {
            printf("%d ",j);
        }
    else if(i%2==0){
        printf("%c ",64+j);
        }
    }
    printf("\n");
}
    return 0;

}