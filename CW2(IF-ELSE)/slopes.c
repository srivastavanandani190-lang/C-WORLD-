#include<stdio.h>
int main(){
double x1,y1,x2,y2,x3,y3,m1,m2;
printf("cordinates(x1,y1):\n");
scanf("%lf",&x1);
scanf("%lf",&y1);
printf("cordinates(x2,y2):\n");
scanf("%lf",&x2);
scanf("%lf",&y2);
printf("cordinates(x3,y3):\n");
scanf("%lf",&x3);
scanf("%lf",&y3);
m1=(x1-x2)/(y1-y2);
m2=(x3-x2)/(y3-y2);
if (m1==m2){
    printf("GIVEN POINT LIES ON SAME STRAIGHT LINE");

}
else{
        printf("GIVEN POINT DOESN'T LIES ON SAME STRAIGHT LINE");

}
    return 0;
}