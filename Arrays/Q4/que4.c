#include<stdio.h>
void main()
{
 int a[30],n,i;
 printf("\nEnter the size of array: ");
 scanf("%d",&n);
 printf("\nEnter the elements of an array: ");
 for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
 printf("\nYour array:\n");
 for(i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
 printf("\nReverse array:\n");
 for(i=n-1;i>=0;i--)
   {
      printf("%d ",a[i]);
   }
 printf("\n");
}
