
#include<stdio.h>
void main()
{
 int n,a,sum=0;
 printf("\nEnter a number: ");
 scanf("%d",&n);
 while(n>0)
   {
     a=n%10;
     sum+=a;
     n/=10;
   }
 printf("\nSum = %d\n",sum);
}

