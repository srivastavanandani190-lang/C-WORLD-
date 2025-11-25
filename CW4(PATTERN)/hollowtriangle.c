#include<stdio.h>
int main(){
int n;
printf("ENTER THE VALUE OF rows n=");
scanf("%d",&n);

int m;
printf("ENTER THE VALUE OF columns m=");
scanf("%d",&m);
for(int i=1;i<=n;i++){
    for( int j=1;j<=m;j++){
    
        if(i==1 || i==n || j==1 || j==m) printf("*");
        else 
        printf(" ");
    }
    printf("\n");
}
    return 0;
}