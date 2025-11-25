#include<stdio.h>
int main(){
int n;
printf("ENTER THE NUMBER:");
scanf("%d",&n);
int r=0;
while (n>0){
r=r*10;//?
r=r+(n%10);
n=n/10;
}
printf("THE REVERSE OF DIGIT IS %d\n",r);

printf("THE SUM OF THE number AND it's reverse IS %d",n+r);
    return 0;
}