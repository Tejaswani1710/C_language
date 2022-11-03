#include<stdio.h>
void main()
{
 int n,sum=0,i=1;
 printf("\n Enter a number: ");
 scanf("%d",&n);
 
 while(i<=n)
 {
  if(i%2!=0)
   
   sum=sum+i;
   i++;
 }
 
 printf("\n Sum of 1-%d is %d\n",n,sum);
}
