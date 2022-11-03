#include<stdio.h>
void main()
{
 int n,temp,sum=0,a;
 printf("\n Enter a number: ");
 scanf("%d",&n);
 temp=n;
 while(n>0)
  {
    a=n%10;
    sum=sum+(a*a*a);
    n/=10;
  }
 if(sum==temp)
  printf("\n It is an Armstrong number.\n");
 else
  printf("\n It is not an Armstrong number.\n");
}
