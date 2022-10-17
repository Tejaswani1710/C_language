#include<stdio.h>
void main()
{
 int i,l,j=0,k=0;
 int a[40],even[30],odd[30];
 printf("\n Enter the size of array: ");
 scanf("%d",&l);
 printf("\n Enter the elements of array: ");
 for(i=0;i<l;i++)
   {
     scanf("%d",&a[i]);
   }
 for(i=0;i<l;i++)
   {
      if(a[i]%2==0)
        {
            even[j]=a[i];
 	    j++;
	}
      else
	{
            odd[k]=a[i];
	    k++;
	}
   }
 printf("\n Even element array is: ");
 for(i=0;i<j;i++)
   {
      printf("%d ",even[i]);
   }
 printf("\n Odd elements of array: ");
 for(i=0;i<k;i++)
   {
     printf("%d ",odd[i]);
   }
 printf("\n");
}
