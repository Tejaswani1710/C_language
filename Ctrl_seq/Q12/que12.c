#include<stdio.h>
int main()
{
 int num,i,j,a;
 printf("\n Enter a value: ");
 scanf("%d",&num);
 printf("\n Prime no.'s upto %d are: ",num);
 for(i=1;i<=num;i++)
   {
	a=0;
     for(j=1;j<=i;j++)
      {
         if(i%j==0)
         a++;
      }
    if(a==2)
    printf("%d ",i);
   }
 printf("\n"); 
}
