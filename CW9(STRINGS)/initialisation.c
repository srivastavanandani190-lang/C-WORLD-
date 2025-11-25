#include<stdio.h>
int main(){
char arr[]={'a','b','c','!'};
char ch='\0';//null character.ascii value 0.

printf("%d\n",ch);
int i=0;
while (arr[i]!='!'){
    printf("%c",arr[i]);
    i++;
}
    return 0;
}