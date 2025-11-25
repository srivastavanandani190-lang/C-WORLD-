#include<stdio.h>
int main(){
int n;
printf("ENTER THE VALUE OF n = ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){//for spaces
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf("%c",64+k);
    }
printf("\n");
}
return 0;
}