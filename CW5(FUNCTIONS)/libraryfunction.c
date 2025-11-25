#include<stdio.h>
#include<math.h>//library file holding many in-built maths functions.

int main(){

int n;
printf("ENTER THE VALUE OF n = ");//printf->library function.
scanf("%d",&n);//library function.
int root=sqrt(n);
printf("THE SQUARE ROOT OF %d = %d\n",n,root);

int q=pow(2,5);
printf("%d",q);

    return 0;
}