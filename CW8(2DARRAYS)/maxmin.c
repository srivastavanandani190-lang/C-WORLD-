#include<stdio.h>
int main(){
    /*int r,c;
    printf("ENTER NUMBER OF ROWS:");
    scanf("%d",&r);
    printf("ENTER NUMBER OF COLUMNS:");
    scanf("%d",&c);
    //int max=0;
   // int max=__INT64_MIN__;*/
int brr[2][2];

printf("enter elements:\n");
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        scanf("%d",&brr[i][j]);
    }
}
int m=brr[0][0];
int x=0;
int y=0;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){      
        if(brr[i][j]>m){
         m=brr[i][j];
         x=i;
         y=j;
        }
    }
}
printf("\n THE maximum elements in a given array  = %d at index (%d,%d)",m,x,y);

    return 0;
}