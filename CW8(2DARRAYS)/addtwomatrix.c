#include<stdio.h>
int main(){
int arr[2][2];
int brr[2][2];
int sum[2][2];
printf("enter elements of matrix arr:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&arr[i][j]);
    }
}
printf("enter elements of matrix brr:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&brr[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        sum[i][j]=arr[i][j]+brr[i][j];
    }
}
printf("sum of both matrix is :\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",sum[i][j]);
    }
    printf("\n");
}
    return 0;
}