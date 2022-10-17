#include<stdio.h>
void main()
{
 int a[40],b[40],c[40];
 int i,as,bs,cs,j=0;
 printf("\n Enter the size of 1st array: ");
 scanf("%d",&as);
 printf("\n Enter the elements of 1st array: ");
 for(i=0;i<as;i++)
   {
     scanf("%d",&a[i]);
   }
 printf("\n Enter the size of 2nd array: ");
 scanf("%d",&bs);
 printf("\n Enter the elements of 2nd array: ");
 for(i=0;i<bs;i++)
   {
     scanf("%d",&b[i]);
   }
 cs=as+bs;
 for(i=0;i<as;i++)
   {
     c[i]=a[i];
   }
 for(i=as;i<cs;i++)
   {
      if(j<bs)
       {
          c[i]=b[j];
       }
      j++;
   }
  printf("\n Concantenation of array: ");
  for(i=0;i<cs;i++)
    {
      printf("%d ",c[i]);
    }
  printf("\n");
}
