#include<stdio.h>
#include<string.h>
void main()
{
 int size,i,j;
 char name[20][20], temp[20];
 printf("\n Enter how many names you are going to enter: ");
 scanf("%d",&size);
 printf("\n Enter names:\n");
 for(i=0;i<=size;++i)
   {
      gets(name[i]);
   }
 for(i=0;i<=size;++i)
   {
      for(j=i+1;j<=size;++j)
        {
	    if(strcmp(name[i],name[j])>0)
               {
		 strcpy(temp,name[i]);
		  strcpy(name[i],name[j]);
		  strcpy(name[j],temp);
	       }
	} 
   }
 printf("\n Sorted order of strings:\n ");
 for(i=0;i<=size;++i)
   {
      puts(name[i]);
   }
}
