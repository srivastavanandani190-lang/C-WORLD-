#include<stdio.h>
int main(){
    int r,c;
    c=2;
    printf("ENTER NUMBER OF students:");
    scanf("%d",&r);
    
    
int brr[r][c];
printf("enter roll number and marks:\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&brr[i][j]);
    }
}
printf("table formed:\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}
    return 0;
}