//functions are designed to perform specific work repeatdly.
//enhance readability of code and helps to reconfigure correction.
//functions helps to 
//int main is also function that displays output and it runs first.
//loops barbar ek hi jagah display karega.
//functions ek hi chiz ko alag alag as per requirement display karega.
//function call inside main function.run line by line unless it meet return.
//function call occurs only if it is mentioned above of int main function.
//function can come under loop or if else.

#include<stdio.h>
void greet(){
    printf("GOOD MORNING\n");
    printf("HOW ARE YOU?\n");
    return;//termination return to OS.

}
int main(){//code starts from main.
greet();//calling to greet function.
greet();

    return 0;//termination.
}