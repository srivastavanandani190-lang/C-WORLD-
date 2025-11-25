#include<stdio.h>
int main(){
int n;
printf("ENTER THE VALUE OF rows n=");
scanf("%d",&n);
int a=1;
for(int i=1;i<=n;i++){// if int a=1 mentioned here print 1,1 2,1 2 3
    for( int j=1;j<=i;j++){
    printf("%d ",a);//floyd's triangle
    a++;
    }
printf("\n");
}
return 0;
}
