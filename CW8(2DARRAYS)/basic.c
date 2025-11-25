//2D ARRAYS->two dimension i.e rows + columns.(array ke ander array)
//declaration int brr[optional][mandatory]={(1,25),(4,6)}.
//index goes in two dimensions.
#include<stdio.h>
int main(){
    int r,c;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&r);
    printf("ENTER NUMBER OF COLUMNS:");
    scanf("%d",&c);
    
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
    return 0;
}