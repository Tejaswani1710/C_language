#include<stdio.h>
void main()
{
  int s,i,j=0,count;
  int a[40];
  printf("\n Enter the size of array: ");
  scanf("%d",&s);
  printf("\n Enter the elements of array :");
  for(i=0;i<s;i++)
    {
      scanf("%d",&a[i]);
    }
  for(i=0;i<s;i++)
     {
       count=1;
      for (j=i+1;j<s;j++)
           {
 	      if( a[i]==a[j] && a[i]!='\0')
                 {
		    count++;
                    a[j]='\0';
		 }
           }
        if(a[i]!='\0')
          {
              printf("\n %d is repeated with the frequency of %d.\n",a[i],count);
          } 
    }
}
