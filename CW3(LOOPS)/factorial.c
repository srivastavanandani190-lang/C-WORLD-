#include<stdio.h>
int main(){
int n;
printf("ENTER THE VALUE OF n:");
scanf("%d",&n);
int product=1;
for(int i=1;i<=n;i++){
product=product*i;
printf("THE FACTORIAL OF %d is: %d\n",i,product);
}
//printf("THE FACTORIAL OF %d is: %d",n,product);//no loop then mention this printf outside of {}

    return 0;
}