#include<stdio.h>23654
int main(){
int selling_price,cost_price ,PROFIT,LOSS;
printf("SELLING-PRICE=");
scanf("%d",&selling_price);
printf("COST-PRICE=");
scanf("%d",&cost_price);

PROFIT=selling_price-cost_price;
LOSS= cost_price-selling_price;

if (selling_price>cost_price)
{
    printf("THERE IS PROFIT TO SELLER\n");
    printf("profit=%d",PROFIT);

}
 else if (selling_price<cost_price)
{
      printf("THERE IS LOSS TO SELLER\n");
          printf("loss=%d",LOSS);
}

else{
    printf("THERE IS NO LOSS OR GAIN");
}

    return 0;
}