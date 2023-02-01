#include<stdio.h>
int cal_res(int n);
int main() 
{ 
  int r,n;
float ncr=0, npr=0;
  printf("\n ENter the value of n: ");
  scanf("%d",&n);
  printf("\n Enter the value of r: ");
  scanf("%d",&r);
  ncr=cal_res(n)/(cal_res(r)*cal_res(n-r));
  printf("\n The value of %dC%d is %0.1f.",n,r,ncr);
  npr=cal_res(n)/cal_res(n-r);
  printf("\n The value of %dP%d is %0.1f.\n",n,r,npr);
  return 0;
}

int cal_res(int n)
 {
    int i,f=1;
    for(i=1;i<=n;i++)
      {
          f=f*i;
      } 
   return f;
 }










