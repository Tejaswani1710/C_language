#include<stdio.h>
int transpose(int a[30][30], int r, int c);
int main()
{
 int a[30][30];
 int i, j, r,c;
 printf("\n Enter the no of rows: ");
 scanf("%d",&r);
 printf("\n Enter no of col.: ");
 scanf("%d",&c);
 printf("\n Enter the elements of matrix: ");
 for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
        {
	   scanf("%d",&a[i][j]);
	}
   }
 printf("\n Your matrix:\n");
 for(i=0;i<r;i++)
   {
      for(j=0;j<c;j++)
        {
	   printf("%d ",a[i][j]);
	}
     printf("\n");
   }
 transpose(a,r,c);
} 

int transpose(int a[30][30], int r , int c)
{
 int t[30][30];
 int i,j ,r1=0,c1=0;
 r1=c;
 c1=r;
 for(i=0;i<r1;i++)
    {
       for(j=0;j<=c1;j++)
          {
   	     t[i][j]=a[j][i];
	  }
    }
 printf("\n Transpose of matrix: \n");
 for(i=0;i<r1;i++)
   {
      for(j=0;j<c1;j++)
        {
	   printf("%d ",t[i][j]);
	}
      printf("\n");
   }
}
