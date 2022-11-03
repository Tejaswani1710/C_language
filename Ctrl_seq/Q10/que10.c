#include<stdio.h>
void main()
{
 int i,j,row;
 printf("\nEnter number of rows:");
 scanf("%d",&row);
 for(i=0;i<=row;i++)
  {
    for(j=0;j<=row-i;j++)
      {
        printf(" ");
      }
    for(j=i;j>=1;j--)
      {
        printf("%d",j);
      }
    for(j=2;j<=i;j++)
      {
        printf("%d",j);
      }
   printf("\n");
  }
}
