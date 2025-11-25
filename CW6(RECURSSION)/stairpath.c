#include<stdio.h>
//just two case either single step or two step at once.
int stair(int n){
    if(n<=2) return n;
    return stair(n-1)+stair(n-2);

}
int main(){
int n;
printf("NUMBER OF STAIRS n =");
scanf("%d",&n);
printf("TOTAL NUMBER OF WAYS IS %d",stair(n));

    return 0;
}