#include<stdio.h>
int main(){
int a[3][2];
printf("enter the elements of matrix:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&a[i][j]);
    }
}
//using second brr[][];
printf("matrix is:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        printf("%d ",a[i][j]);
    }
    printf("\n");
}
printf("\ntranspose of matrix is:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        printf("%d ",a[j][i]);
    }
    printf("\n");
}

    return 0;
}