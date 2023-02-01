#include<stdio.h>
int fact(int);
int gcd(int,int);
int main()
{
 int a,b;
 int x,y,z;
  printf("\n Enter a number: ");
 scanf("%d",&a);
 b=fact(a);
 printf("\n Enter the value of x,y for gcd: ");
 scanf("%d%d",&x,&y);
 z=gcd(x,y);
 printf("\n Factorial of %d is %d.",a,b);
 printf("\n GCD of %d and %d is %d.\n",x,y,z);
}//main ends

int fact(int n)
{
   if(n==1)
      return 1;
   else
      return n*fact(n-1);
}//factorial ends

int gcd(int x,int y)
{
  if(y>x)
     return gcd(x,y);
  if(y==0)
     return m;
  else 
     return gcd(y,y%x);
}//gcd ends
