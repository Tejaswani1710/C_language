#include<stdio.h>
int factorial(int n);
int main()
{
 int n;
 printf("\n Enter a number whose factorial you want to find: ");
 scanf("%d",&n);
 printf("Factorial of %d is %d.\n",n,factorial(n));
 return 0;
}

int factorial(int n)
{
 if(n==1)
   return 1;
 else
  return  n*factorial(n-1);
}
