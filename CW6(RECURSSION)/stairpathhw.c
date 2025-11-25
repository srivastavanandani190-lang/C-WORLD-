#include<stdio.h>
//just two case either single step ,two steps or three steps at once.
int stair(int n){
    if(n<=2) return n;
    if(n==3) return 4;//base case.
    return stair(n-1)+stair(n-2)+stair(n-3);

}
int main(){
int n;
printf("NUMBER OF STAIRS n =");
scanf("%d",&n);
printf("TOTAL NUMBER OF WAYS IS %d",stair(n));

    return 0;
}