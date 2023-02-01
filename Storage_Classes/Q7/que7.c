#include<stdio.h>
static int a=24;
void func1();
void func2();
int main ()
{
  static int a;
  printf("\n Default value of local static: %d.",a);
  func1();
  func1();
  func2();
  func2();
  return 0 ;
}

void func1()
{
 printf("\n  Global Static:%d",a);
}
 
void func2()
{
 static int a=22;
 printf("\n local static of function 2:",a); 
}
