#include<stdio.h>
//strings->character array.
//character takes 1byte i.e 8bits.
//ascii value A=65 ; a=97 ; 0=48 ;9=57;
int main(){
char ch[5]={'a','b','c','d','e'};
printf("%c",ch[0]);
printf("%c\n",ch[1]);
printf("%c\n",ch[2]);
printf("%c\n",ch[3]);
printf("%c\n",ch[4]);

printf("%p\n",&ch[0]);
printf("%p\n",&ch[1]);
printf("%p\n",&ch[2]);
printf("%p\n",&ch[3]);
printf("%p\n",&ch[4]);
//one bit difference(hexadecimal format).

    return 0;
}