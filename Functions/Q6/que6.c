#include<stdio.h>
int reverse(int a[10],int b,int p,int n);
int main()
{
  int integer;
  int p,b,n;
  printf("enter the size of array:");
  scanf("%d",&n);
  printf("\nenter the array element:");
  scanf("%d",&integer);
  printf("\nhow many bit you want to  invert:");
  scanf("%d",&b);
  printf("\nwhich position you want :");
  scanf("%d",&p);
  reverse(integer,b,p,n);
  return 0;
}
int reverse(int a,int b,int p,int n)
{
  for(int i=;i<n;i++)
    {
     int num=a&(~(1<<p));
   }
   return 0;
}

