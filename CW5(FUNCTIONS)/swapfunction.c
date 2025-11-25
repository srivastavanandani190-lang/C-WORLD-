#include<stdio.h>
void swap(int* a,int* b){//you are passing address of actual arguments so pointer is used to extract the value .
int temp=*a;//*a and *b are pointers storing address of a and b.
*a=*b;//*a->value present at this pointer(address).
*b=temp;
return;
}
//call by value doesn't work in case of swapping.
//call by reference works in case of swapping (address).
//scope of variable(limit of variable with given function or block of code).
//pointers stores variable's address -> which location it occupies in memory.

int main(){
int a,b;
printf("ENTER THE VALUE OF a = ");
scanf("%d",&a);

printf("ENTER THE VALUE OF b = ");
scanf("%d",&b);
printf("a = %d ; b = %d\n",a,b);
swap(&a,&b);
printf("AFTER SWAPPING->");
printf("a = %d ; b = %d",a,b);

    return 0;
}