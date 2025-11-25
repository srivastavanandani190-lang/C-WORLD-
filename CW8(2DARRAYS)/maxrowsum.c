#include<stdio.h>
int main(){
    int r,c;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&r);
    printf("ENTER NUMBER OF COLUMNS:");
    scanf("%d",&c);
    int sumzero=0;
    int sumone=0;
    int summax=0;
int brr[r][c];
printf("enter elements:\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        scanf("%d",&brr[i][j]);
    }
}
printf("2D ARRAY:\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}
for(int i=0;i<=0;i++){
    for(int j=0;j<c;j++){
        sumzero=sumzero+brr[i][j];
    }
}
printf("sum of elements of first row of matrix=%d\n",sumzero);
for(int i=1;i<=1;i++){
    for(int j=0;j<c;j++){
        sumone=sumone+brr[i][j];
    }
}
printf("sum of elements of second row of matrix=%d\n",sumone);
if(sumzero>sumone){
    printf("row with maximum sum is 0 : %d",sumzero);
}
else
printf("row with maximum sum is 1 : %d",sumone);
    return 0;
}