//pointer also holds it's own address.
//with the help of pointers you can also update the value of variable.
//address.(%p->prints address)
//randomly computer chooses any address once you excute the program.
//this address changes as many time you re-execute the program.
//*indicates the value of variable storing this address.

#include<stdio.h>

int main(){
int x=54;
int* a=&x;//int* stores address of int.
int** b=&a;//int** stores address of int* (pointer's address).
//double pointer.
printf("%d\n",x);
printf("%p\n",&x);
printf("%d\n",*a);
printf("%p\n",a);
printf("%p\n",&a);
printf("%p\n",b);
printf("%d",**b);

    return 0;
}