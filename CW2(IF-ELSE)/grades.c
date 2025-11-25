#include<stdio.h>
int main(){
int percentage;
printf("GIVEN PERCENTAGE:");
scanf("%d",&percentage);
if(percentage<=100 && percentage>90){
    printf("excellent");
}
else if(percentage<=90 && percentage>80){
       printf("very good");
}
    else if(percentage<=80 && percentage>70){
          printf("good");
    }
else if (percentage<=70 && percentage>60){
           printf("can do better");
}
else if(percentage<=60 && percentage>50){
      printf("average");
}
else if(percentage<=50 && percentage>40){
        printf("below average");
}
else{
    printf("fail");
}

    return 0;
}