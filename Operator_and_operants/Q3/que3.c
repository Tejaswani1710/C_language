#include<stdio.h>
int main()
{
 int a,b,larg;
 printf("\n Enter two numbers: ");
 scanf("%d %d",&a,&b);
 larg=a>b? a:b;
 printf("\n The largest no. is %d.",larg);
}
