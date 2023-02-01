#include<stdio.h>
int x=8;
void func1();
int main()
{
 int x=2;
 printf("\n x=%d",x);
 func1();
   {
     int x=12;
     printf("\n x=%d",x);
   }
 printf("\n x=%d\n",x);
 return 0; 
}

void func1()
{
 printf("\n x=%d",x);
}
