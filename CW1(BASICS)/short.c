#include<stdio.h>
int main(){
//byte-kb-mb-gb-tb(1000)
//8bits=1bytes
//short=2byte=16bits
//n bits=2powern(number can be stored)
//16bits=2power16(number stored not range)=65536
//int,float data type -4bytes=32bits=2power32(number stored not range)
//short also stores integer number ranging(-32768->32767)
//range=(-2power15->2power15-1)short
//range=(-2power31->2power31-1)int
//long=8bytes=64bits
//range=(-2power63->2power63-1)
//char =1byte=8bits.
short a=32765;
printf("%d",a);
    
    return 0;
}