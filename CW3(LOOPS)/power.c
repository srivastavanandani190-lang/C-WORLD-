#include<stdio.h>
int main(){
int a;
printf("ENTER BASE:");
scanf("%d",&a);
int b;
printf("ENTER POWER:");
scanf("%d",&b);
int power=1;
for (int i=1;i<=b;i++){
    power=power * a;
}
printf("%d is raised to %d : %d",a,b,power);

    return 0;
}