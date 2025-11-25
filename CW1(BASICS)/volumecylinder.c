#include<stdio.h>
int main(){
    float radius;
    float height;
    float volume;

    printf("RADIUS=");
    scanf("%f",&radius);
    printf("HEIGHT=");
    scanf("%f",&height);

    volume= 3.141*radius*radius*height;
    printf("THE VOLUME OF CYLINDER IS %f",volume);
    
    return 0;
}