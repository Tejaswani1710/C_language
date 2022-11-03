#include<stdio.h>
void main()
{
 int n,sum=0;
 printf("\n Enter any number: ");
 scanf("%d",&n);
 for(int i=1;i<=n;++i)
  {
   if(i%5==0)
    {
     continue;
    }
   sum=sum+i;
  }
 printf("\n Sum of 1-%d numbers is %d.\n",n,sum);
}
