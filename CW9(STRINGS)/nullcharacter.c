#include<stdio.h>
int main(){
char arr[]="hello world";
//[20] no issue even characters are less than this.
//In this case null character is automatically detected size includes null character.
//char ch[]={'a','b','c','\0'}; you need to mention here.
int i=0;
while(arr[i]!='\0'){
    printf("%c",arr[i]);
    i++;
}
printf("\n%c",arr[2]);
printf("\n%d\n",arr[2]);
arr[1]=97;
int j=0;
while(arr[j]!='\0'){
    printf("%c",arr[j]);
    j++;
}
    
    return 0;
}