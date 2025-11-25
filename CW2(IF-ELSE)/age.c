#include<stdio.h>
int main(){
    int a,b,c;
    printf("RAM'S AGE:");
    scanf("%d",&a);
       printf("SHAYAM'S AGE:");
    scanf("%d",&b);
       printf("AJAY'S AGE:");
    scanf("%d",&c);
    if (a<b && a<c){
        printf("Ram is Younger among all");
        }
    else if (b<c && b<a) {
             printf("Shayam is Younger among all");
    }
    else {
           printf("Ajay is Younger among all");
    }
    return 0;
}
    