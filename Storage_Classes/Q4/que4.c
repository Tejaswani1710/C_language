#include<stdio.h>
int main ()
{
 register int a=5;
 auto int b=20;
 printf("\n Value of Register: %d.",a);
 printf("\n Value of Auto: %d.",b);
   {
      register int a;
      printf("\n\n BLOCK 1");
      printf("\n Default value of Register: %d.",a);
      a=10;
      printf("\n Value of Register in block 1: %d.",a);
      printf("\nValue of Auto in block 1: %d.\n",b);
   }
   {
     auto int b;
     printf("\n BLOCK 2");
     printf("\n Default value of Auto: %d.",b);
     b=25;
     printf("\n Value of Auto in block 2: %d",b);
     printf("\n Value of Register in block 2: %d\n",a);
   }
 return 0;
}
