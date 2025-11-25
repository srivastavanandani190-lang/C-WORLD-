#include<stdio.h>
int main(){
    
char c='Y';
int x= (char)c;//typecasting.(converting one datatype to another).
char a=(int)x;
printf("%d\n",c);
printf("%d\n",x);
printf("%c\n",a);

    return 0;
}