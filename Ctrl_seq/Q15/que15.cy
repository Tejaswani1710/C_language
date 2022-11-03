#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,n;
 int j=1;
 int k;
 printf("\n Generating 5 random numbers:");
for(i=0;i<5;++i)// generating random numbers
   {
        n[i]=rand()%100;
        printf("\n %d. %d",j,n);
        ++j;
   }
 for(i=0;i<5;++i)//prime numbers 
  {
     if(n[i]%i==0)
       {
	 p[i]=n[i];
       }
  } 
 for(i=0;i<5;++i)
 {ptintf("\n%d",p[i]);}

 /*for(i=0;i<5;++i)//co prime numbers
   {
      for(k=i+1;k<5;++k)
      
   }*/
 return 0;
}//main ends
