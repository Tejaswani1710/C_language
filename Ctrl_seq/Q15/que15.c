#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j;
 int n[20];
 int p[20];
 int pcount;
 printf("\n Generating 10 random numbers:");
 for(i=1;i<=10;++i)// generating random numbers
   {
        n[i]=rand()%10;
        printf("\n %d",n[i]);
   }

 for(i=1;i<=10;++i)//prime number
   {  
       pcount=0;
      for(j=1;j<=n[i];++j)
        {
            if(n[i]%j==0)
               {
 	   	 p[i]=n[i];
           	 pcount++;
	       }
        }
        if(pcount==2) 
         {
            int c=0;
		for(int k=1;k<=i;k++)
		{
			if(p[k] == n[i])
			c++; 
		}
		if(c==1)
		 printf("\n  =>%d",p[i]);   
         }
   
   
}
 printf("\n :(");

 return 0;
}//main ends
