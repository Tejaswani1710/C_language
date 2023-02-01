#include<stdio.h>
int a=5;
void fun1(int);
void fun2(int);
int main()
{
 static int k=10;
 int i=0;
 int j=0;
 printf("\n Value of Static variable in main: %d.",k++);
 printf("\n Value of Global variable in main: %d.\n",a);
// i=0;
 fun1(++i);
 fun1(++i);
 fun2(++j);
 fun2(++j);
 fun2(++j);
 return 0;
}// main

void fun1(int i)
{
  printf("\n Value of Global variable in function 1 in %d call: %d.",i,a);
  printf("\n Static variable is not accessable.\n");
}//func1

void fun2(int j)
{
  int b=20;
  printf("\n Value of Static variable of function 2 in %d call: %d.",j,b++);
  printf("\n Value of Global variable in function 2 in %d call:%d.\n",j,a);
}//func2
