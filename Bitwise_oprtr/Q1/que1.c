#include<stdio.h>
void main()
{
 unsigned int n;
 int count=0;
 printf("\n Enter a value: ");
 scanf("%d",&n);
 while(n!=0)
    {
       if(n&1==1)
         {
            count++;
	  
         }
	    n=n>>1;

    }
 printf("\n no of 1 %d\n",count);
}
