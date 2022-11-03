#include<stdio.h>
void main()
{
 int i,j,a;
 printf("\n Enter the values of i and j : ");
 scanf("%d%d",&i,&j);
 if (i<=40&&j<=40)
  {
   printf("\n Both variables are less than or equal to 40.\n");
   a=(i==20||j==20)?printf("\n Atleast one variable is having 20.\n"):printf("\n Both variables are not having 20.\n");
  }
 else
  {
   printf("\n Both are not less than or equal to 40.\n");
   a=(i==20||j==20)?printf("\n Atleast one variable is having 20.\n"):printf("\n Both variables are not having 20.\n"); 
  }
}
    









