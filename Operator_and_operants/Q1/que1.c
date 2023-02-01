#include<stdio.h>
int main()
{
 int a,b,add,div,sub,mul,mod;
// float div;
 printf("\n Enter two whole numbers: ");
 scanf("%d %d",&a,&b);
 add=a+b;
 sub=a-b;
 mul=a*b;
 div=a/b;
 mod=a%b;
 printf("\n Addition of %d and %d is %d.",a,b,add);
 printf("\n Substration of %d from %d id %d.",b,a,sub);
 printf("\n Multiplication of %d with %d is %d.",a,b,mul);
 printf("\n Division of %d from %d is %d.",a,b,div);
 printf("\n Mod of %d and %d is %d.",a,b,mod);
}
