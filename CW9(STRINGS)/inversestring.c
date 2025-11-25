#include<stdio.h>
#include<string.h>
int main(){
char str[40];
puts("enter the string:");
scanf("%[^\n]s",str);
puts("reverse is :");//this prints the string with \n included.
puts(str);


    return 0;
}