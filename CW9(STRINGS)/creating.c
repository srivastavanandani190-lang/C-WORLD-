#include<stdio.h>

int main(){
char arr[]="hello world";

for(int i=0;i<12;i++){
    printf("%c",arr[i]);
}
    //arr[i] : i[arr] : *(arr+i) :*(i+arr) ways of printing particular elements.
    return 0;
}