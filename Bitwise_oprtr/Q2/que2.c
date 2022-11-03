#include<stdio.h>
void main()
{
 unsigned int a=0xa2c3;
 printf("\n%x",~a);
 printf("\n%x",a^0x3f06);
 printf("\n%x",a|~0x3f06);
 printf("\n%x",a>>3);
 printf("\n%x",a<<5);
 printf("\n%x",a^~a);
 printf("\n%x",a|~a);
 printf("\n%x",(a&~0x3f06)<<8);
 printf("\n%x\n",a&~(0x3f06>>8));
 
}
