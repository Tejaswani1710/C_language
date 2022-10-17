#include<stdio.h>
void main()
{
 int a[30];
 int i,j,n,temp;
 printf("\n Enter the size of array: ");   
 scanf("%d",&n);
 printf("\n Enter the elements of array: ");
 for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
 for(i=0;i<n;i++)
   {
      for(j=i;j<n;j++)
        {
           if(a[i]<a[j])
              {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
 	      }
        }
   }
 printf("\n Largest element is %d.",a[0]);
 printf("\n 2nd Largest element is %d.",a[1]);
 printf("\n Smallest element is %d.",a[n-1]); 
 printf("\n 2nd smallest element is %d.\n",a[n-2]); 

}
