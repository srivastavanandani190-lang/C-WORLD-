#include<stdio.h>
int main(){//break(IT IS USED TO TERMINATE)
int n;//prime number(2,3,5,7,11,13......)
printf("enter the number:");
scanf("%d",&n);
if(n==2){
    printf("IT IS PRIME NUMBER");
}
for (int i=2;i<=n-1;i++){
    if (n%i==0){
        printf("NUMBER IS COMPOSITE\n");
        break;
    }
   
    else{
        printf("NUMBER IS PRIME\n");
        break;
    }
}
//each round of loop is called ITERATION.
  
   if (n==1 || n==0){
        printf("NUMBER IS NEITHER PRIME NOR COMPOSITE");
    }
//2 won't show any output??



    return 0;
}