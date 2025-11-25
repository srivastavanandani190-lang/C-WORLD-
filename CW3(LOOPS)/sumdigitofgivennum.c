#include<stdio.h>
int main(){
int n;
printf("ENTER THE NUMBER:");
scanf("%d",&n);
int sum=0;
int lastdigit=0;
while (n!=0){
lastdigit=n%10;//remainder as last digit
sum=sum+lastdigit;//sum 
n=n/10;//12345 initially then after dividing by 10 it becomes 1234
// to continue the loop
}
printf("THE SUM OF DIGIT IS %d",sum);

    return 0;
}