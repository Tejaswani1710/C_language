#include<stdio.h>
int index(int s[],int,int);
int main()
{
 int i;
 int s[40];
 int sz;
 int t;
 printf("\n Enter the size of array: ");
 scanf("%d",&sz);
 printf("\n Enter the elements of array: ");
 for(i=0;i<sz;++i)
   {
      scanf("%d",&s[i]);
   }
 printf("\n Enter the number whose right most occurance you want to find:");
 scanf("%d",&t);
 index(s,sz,t);
 return 0; 
}// main ends

int index(int s[], int size, int t)
{
 int i;
 int j=1;
 for(i=size-1;i>=0;--i)
   {   
       if(s[i]==t)
         {
  	    printf("\n %d's rightmost occurance is %d\n",t,j);
            break;
         }//if
      j++;
   }//for
}
