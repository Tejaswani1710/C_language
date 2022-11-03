#include<stdio.h>
void main()
{
 int a[10],n,i; 
 printf("\n Enter 10 elements:");
 for( i=0;i<10;i++)
   {
     scanf("%d",&a[i]);
   }
 printf("\n Enter the number to be searched: ");
 scanf("%d",&n);
 i=0;
 while(i<10)
   {
       if( n == a[i])
         // {
             break;
         // }
     i++;
   }
 if(i<10)
   printf("\n Number find in %d position.",i+1);
 else
   printf("\n Number not found!!");
}
