#include<stdio.h>
void main()
{
 int a[40];
 int i,pos,val,l;
 printf("\n Enter the length of array: ");
 scanf("%d",&l);
 printf("\n Enter the elements of array: ");
 for(i=0;i<l;i++)
   {
     scanf("%d",&a[i]);
   }
 printf("\n Enter the position in which you want to enter a new number: ");
 scanf("%d",&pos);
 printf("\n Enter the new number you want to enter: ");
 scanf("%d",&val);
 for(i=0;i<l;i++)
   {
      if(i==(pos-1))
        {
          a[i]=val;
        }
   }
 printf("\n Your array after changing values: ");
 for(i=0;i<l;i++)
   {
      printf("%d ",a[i]);
   }
 printf("\n");
}
