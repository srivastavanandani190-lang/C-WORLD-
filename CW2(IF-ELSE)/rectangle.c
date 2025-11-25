#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("length:");
    scanf("%d",&l);
     printf("breadth:");
    scanf("%d",&b);
    area=l*b;
    perimeter=(l+b)*2;
    if ( area>perimeter)
    {
        printf("AREA IS GREATER THAN PERIMETER");
    }
    else if ( area==perimeter)
    {
        printf("AREA IS EQUAL TO PERIMETER");
    }
    
    else {
        printf("AREA IS LESSER THAN PERIMETER");
    }
    return 0;
}