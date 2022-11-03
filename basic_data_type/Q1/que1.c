#include<stdio.h>
void main()
{
 float p,r,t,i;
 printf("\n Enter Principle: ");
 scanf("%f",&p);
 printf("\n Enter rate: ");
 scanf("%f",&r);
 printf("\n Enter time: ");
 scanf("%f",&t);
 i=(p*r*t)/100;
 printf("\n Simple Interest is %0.2f",i);
}
