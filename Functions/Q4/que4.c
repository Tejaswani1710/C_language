#include<stdio.h>
int rotate_right(int a[50], int s, int b);
int main()
{
  int a[50];
  int s,i,b;
  printf("\n Enter the size of array: ");
  scanf("%d",&s);
  printf("\n Enter the elements of array: ");
  for(i=0;i<s;i++)
    {
       scanf("%d",&a[i]);
    } 
  //printf("\n Enter the number you want to rotate: ");
//  scanf("%d",&n);
  printf("\n Enter by how many positions you want to rotate: ");
  scanf("%d",&b);
  rotate_right(a,s,b);
} 

int rotate_right(int a[50], int s, int b)
{
 int i,j,temp=0;
 for(j=0;i<b;j++)
    {
      temp=a[s-1];
      for(i=s-1;i>=0;i++)
	{
	   a[i]=a[i-1];
//           a[j]=temp;
	}
     a[j]=temp;
    }
 printf("\n Your array after rotation: ");
 for(i=0;i<s;i++)
   {
      printf("%d ",a[i]);
   }
}
