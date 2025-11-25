#include<stdio.h>
int main(){
    float p;
    float r;
    float t;
    float simple_interest;

    printf("PRINCIPLE=");
    scanf("%f",&p);
    printf("RATE=");
    scanf("%f",&r);
     printf("TIME=");
    scanf("%f",&t);
     simple_interest=(p*r*t)/100;

    
    printf("The simple interest is %f",simple_interest);
    
    return 0;
}