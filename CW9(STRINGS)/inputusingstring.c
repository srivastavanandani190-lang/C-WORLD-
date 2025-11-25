#include<stdio.h>
#include<string.h>
int main(){
char str[40];
scanf("%s",str);//not considering space as character just considering first word using scanf as input.
//gets(str) entire sentence can be taken input.
//scanf("%[^\n]s",str);
//without giving size you can't declare.(str[40])

printf("your input is: %s",str);


    return 0;
}