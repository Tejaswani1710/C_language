#include<stdio.h>
int swap(int*,int*);
int main()
{
 int a,b;
 printf("\n Enter the values of A and B: ");
 scanf("%d%d",&a,&b);
 printf("\n Values before swapping:");
 printf("\n A= %d\n B= %d",a,b);
 swap(&a,&b);
 printf("\n Values of after swapping:");
 printf("\n A= %d\n B= %d\n",a,b);
 return 0;
}

 int swap(int *x, int *y)
{
 int temp;
 temp=*x;
 *x=*y;
 *y=temp;
}
