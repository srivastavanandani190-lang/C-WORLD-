#include<stdio.h>
int main(){
    float temp_farenheit , celsius;

    printf("CELSIUS=");
    scanf("%f",&celsius);

    temp_farenheit= (9.0/5.0 * celsius) + 32;
    printf("CONVERSION OF CELSIUS INTO FARENHEIT IS %f",temp_farenheit);
    return 0;
}