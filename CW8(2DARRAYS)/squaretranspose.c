#include<stdio.h>
int main(){
    int n;
    printf("ENTER NUMBER OF ROWS AND COLUMNS:");
    scanf("%d",&n);

    
int brr[n][n];
printf("enter elements:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%d",&brr[i][j]);
    }
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int temp=brr[i][j];
        brr[i][j]=brr[j][i];
        brr[j][i]=temp;
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}
    return 0;
}