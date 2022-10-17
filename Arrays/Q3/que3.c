#include<stdio.h>
void main()
{
  int r,c,i,j;
  int a[90][90];
  printf("\nEnter no. of rows: ");
  scanf("%d",&r);
  printf("\nEnter no. of columns:");
  scanf("%d",&c);
  printf("\nEnter %d elements of array: ",r*c);
  for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
           {
               scanf("%d",&a[i][j]);
           }
     }
  printf("\nYour array is:\n");
  for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
         {
            printf("%d ",a[i][j]);
         }
       printf("\n");
    }
}
