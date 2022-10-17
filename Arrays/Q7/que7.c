#include<stdio.h>
void main()
{
  int a[40],b[40];
  int l,i,j=0;
  printf("\n Enter the length of array: ");
  scanf("%d",&l);
  printf("\n Enter the elements of array: ");
  for(i=0;i<l;i++)
    {
       scanf("%d",&a[i]);
    }
  for(i=l-1;i>=0;i--)
    {
      // for(j=0;j<l;j++)
        // {
            b[j]=a[i];
            j++;
    }
  printf("\n Array copied in reverse order is: \n");
  for(j=0;j<l;j++)
    {
       printf("%d ",b[j]);
    }
  printf("\n");
}
