#include<stdio.h>
int largest(int a[],int size,int large);
int main()
{
 int i,s,larg=0;
 int a[40];
 printf("\n Enter size of array: ");
 scanf("%d",&s);
 printf("\n Enter the elements of array: ");
 for(i=0;i<s;i++)
    {
       scanf("%d",&a[i]);
    }
 larg=a[0];
 largest(a,s,larg);
 printf("\n Largest element of array is %d.\n",largest(a,s,larg)); 

}

int largest(int a[],int size,int larg)
{
  if (size<0)
    {
       return larg;
    } 
 else
    {
      if(a[size]>larg)
          larg=a[size];
      return largest(a,--size,larg); 
    }
}
