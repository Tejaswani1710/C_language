#include<stdio.h>
int main()
{
 int i,j,a[2][2],b[2][2],c[2][2];
 char ch;
 printf("\n Enter the elements of 1st matrix(2x2):");
 for(i=0;i<2;++i)
  {
    for (j=0;j<2;++j)
    scanf("%d",&a[i][j]);
  }
 printf("\n Enter the elements of 2nd matrix(2x2): ");
 for(i=0;i<2;++i)
  {
    for(j=0;j<2;++j)
    scanf("%d",&b[i][j]);
  }
 printf("\n Enter your choice \n'+'for addition \n'-'for substration \n'*'for multiplication ");
 scanf(" %c",&ch);
 switch(ch)
  {
   case '+':
   printf("\n Your addition is:\n");
    for(i=0;i<2;++i)
     { 
       for(j=0;j<2;++j)
        {
          c[i][j]=a[i][j]+b[i][j];
          printf("%d",c[i][j]);
        }
       printf("\n");
     }
    break;
   case '-':
   printf("\n Your substraction is:\n");
    for(i=0;i<2;++i)
     {
       for (j=0;j<2;++j)
        {
          c[i][j]=a[i][j]-b[i][j];
          printf("%d",c[i][j]);
        }
       printf("\n");
     }
   break;
   case'*':
   printf("\n Your multiplication is:\n");
    for(i=0;i<2;++i)
     {
       for(j=0;j<2;++j)
        {
          c[i][j]=0;
          for(int k=0;k<2;++k)
           {
             c[i][j]+=a[i][k]*b[k][j];
           }
        }
     }
   for(i=0;i<2;++i)
    {
      for(j=0;j<2;++j)
      {
        printf("%d ",c[i][j]);
      }
      printf("\n");
    }
 break;
 default :
 printf("\n Invalid choice");
 break;
  }
}

