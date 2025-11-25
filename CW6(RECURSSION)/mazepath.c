//maze path(down + right , single step)

#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        //only rightways
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        //only downways
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
    }
    int totalways=rightways + downways;
    return totalways;
}
int main(){
    int n,m;
    printf("ENTER THE NUMBER OF ROWS =");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF COLUMNS =");
    scanf("%d",&m);
    int numberofways=maze(1,1,n,m);
    printf("%d",numberofways);

    return 0;
}