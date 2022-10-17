#include<stdio.h>
void main()
{
  int i,l,pos;
  int a[40];
  printf("\n Enter the size of array: ");
  scanf("%d",&l);
  printf("\n Enter the elements of array: ");
  for(i=0;i<l;i++)
     {
       scanf("%d",&a[i]);
     }
  printf("\n Enter the position of element you want to delete: ");
  scanf("%d",&pos);
  for(i=0;i<l;i++)
    {
       if(i==(pos-1))
         {
            for(i=pos-1;i<l;i++)
              {
     	         a[i]=a[i+1];
	      }
         }
    }
  printf("\n Your array after removing the element: ");
  for(i=0;i<l-1;i++)
    {
       printf("%d",a[i]);
    }
  printf("\n");
}
