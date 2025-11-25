#include<stdio.h>
int main(){
int i=1;// if int i;(garbage value no result because no initialisation)

while (i<101){//condition likhi hoti hai

//jab jada chize na pta ho toh use karte hai

    printf("%d ",i);
    i++;
}

//infinite loop if there's no termination mentioned then output goes on running infinitely

    return 0;
}