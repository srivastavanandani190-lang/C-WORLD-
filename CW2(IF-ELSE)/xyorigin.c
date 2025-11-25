#include<stdio.h>
int main(){
float x,y;
printf("coordinates:");
scanf("%f %f",&x,&y);
if(y==0 && x!=0){
    printf("COORDINATES LIES ON X-AXIS");
}
else if(x==0 && y!=0){
       printf("COORDINATES LIES ON Y-AXIS");
}
else if(x==0 && y==0){
      printf("COORDINATE IS ORIGIN");
}
else{
    printf("LIES ON BOTH COORDINATES PLANE");
}
    return 0;
}