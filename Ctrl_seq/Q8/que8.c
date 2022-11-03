#include<stdio.h>
void main()
{
 int n,a,re,rev=0;
 printf("\n Enter a number >2 digit: ");
 scanf("%d",&n);
 a=n;
 while(n!=0)
  {
   re=n%10;
   rev=rev*10+re;
   n/=10;
  }
 if(rev==a)
  printf("\n It is a palidrome no.\n");
 else
  printf("\n It is not a palidrome no.\n");
}
