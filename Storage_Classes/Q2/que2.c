#include<stdio.h>
void autofunc(int);
void staticfunc(int);

int main()
{ 
 int i=0;
 int k=0;
 printf("\n To show difference betw\een static and auto.");
 autofunc(++i);
 autofunc(++i);
 autofunc(++i);
 printf("\n");
 staticfunc(++k);
 staticfunc(++k);
 staticfunc(++k);
 printf("\n");
 return 0;
}

void  autofunc(int i)
{
 
 auto int j=10;
 printf("\n Auto value at %d call : %d",i,j++);
 
}

void staticfunc(int k)
{
 
 static int j=20;
 printf("\n Static value at %d call: %d",k,j++);
}


