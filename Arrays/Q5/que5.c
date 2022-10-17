#include<stdio.h>
void main()
{
 int a[50],i,l,sum=0;
 float avg=0;
 printf("\nEnter the size of array: ");
 scanf("%d",&l);
 printf("\nEnter the elements of array: ");
 for(i=0;i<l;i++)
   {
      scanf("%d",&a[i]);
   }
 printf("\nYour array: ");
 for(i=0;i<l;i++)
   {
     printf("%d ",a[i]);
   }
 for(i=0;i<l;i++)
   {
      sum+=a[i];
   }
 avg=sum/l;
 printf("\nSum of the array is %d.",sum);
 printf("\nAverage of array is %0.2f.\n",avg);
}
