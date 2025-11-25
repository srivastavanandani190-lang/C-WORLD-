#include<stdio.h>
int main(){
int n;
printf("enter the value of n:");
scanf("%d",&n);//BODMAS(herirachy)
/*if(n%5==0 || n%3==0 && n%15!=0){
    printf("The number is divisible by 5 or 3 but not 15");
}
else {
    printf("The number is not matching the required condition");
}*/
if((n%5==0 || n%3==0) && n%15!=0){
    printf("The number is divisible by 5 or 3 but not 15");
}
else {
    printf("The number is not matching the required condition");
}

    return 0;
}