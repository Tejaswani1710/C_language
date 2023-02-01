#include<stdio.h>
int fact(int n);
int main()
{
  int n,r;
  float res=0;
  printf("\n Enter the value of n: ");
  scanf("%d",&n);
  printf("\n Enter the value of r: ");
  scanf("%d",&r);
  res=fact(n)/fact(n-r);
  printf("\n the value of %d!/(%d-%d)! is %0.2f.\n",n,n,r,res); 
}
 
 int fact(int n)
 {
    int i,f=1;
    for(i=1;i<=n;i++)
      {
        f=f*i; 
      }
  return f;
 }
