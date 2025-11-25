#include<stdio.h>
int main(){
float x;
printf("enter x:");
scanf("%f",&x);

int y=x;

float z=x-y;
printf("THE FRACTIONAL VALUE OF x is %0.2f",z);

    return 0;
}