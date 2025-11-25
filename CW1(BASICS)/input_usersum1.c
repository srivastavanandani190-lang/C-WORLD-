#include<stdio.h>5
int main(){
    int a,b,c;
    //can't use c=a+b here because it prints the addresses somehow!
    printf("THE VALUE OF a=");
    scanf("%d",&a);
    printf("THE VALUE OF b=");
    scanf("%d",&b);
    c=a+b;
    printf("THE SUM OF a AND b is %d",c);
    return 0;
}
//int,float,char are datatype and %d,%f are format specifier of variable(you declaraed to store value)
 //&("address of operator")->supplied data should be copied to the adrress of variable'a'.
 //%d->integer
 //%f->float
 //%c->character
 //%lf->double
 //%lli or lld->long long
 //%s->string
 //%p->pointer
 //%10d->width upto 10 character(width)
 //%0.2f->decimal place(precision)
 //FLAGS: 1.%+or-d->+d or -d
 //%-2d-> left align
 //%05d-> add 0 in space.
