#include<stdio.h>
void main()
{
 int n,fact=1;
 printf("\n Enter a number: ");
 scanf("%d",&n);
 for(int i=1;i<=n;++i)
  {
    fact=fact*i;
  }
 printf("\n Factorial of %d is %d.\n",n,fact);
}
