#include<stdio.h>
int main(){
int n;
printf("Enter the number:");
scanf("%d",&n);
int count=0;
while (n!=0){
n=n/10;//n=1234->1234/10=123;123/10=12;12/10=1;1/10=0
//each time count increases from (0-1-2-3-4)
//at last print count.
    count++;
}
    printf("the number of digits: %d",count);
    return 0;
}