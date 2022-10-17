#include<stdio.h>
void main()
{
  char a[50];
  int i,t=0,num=0,sp=0,al=0;
  printf("\nEnter a string with alphabets digits and space: ");
  scanf("%[^\n]s",a);
 for(i=0;a[i];i++)
     { 
        if(a[i]==9)
           t++;
        else if(a[i]==32)
           sp++;
        else if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
           al++;
        else if(a[i]>='0'&&a[i]<='9')
           num++;
     }
  
  printf("\nNo. of alphabets= %d",al);
  printf("\nNo. of digits= %d",num);
  printf("\nNo. of space= %d",sp);
  printf("\nNo. of tabs= %d\n",t);
  
 }
