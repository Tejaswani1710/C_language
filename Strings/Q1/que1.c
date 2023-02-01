#include<stdio.h>
#include<ctype.h>
void main()
{
 char a[40];
 int i=0;
 printf("\n Enter a string: ");
 scanf("%s",a);
 while(a[i]!='\0')
     {
         if(a[i]>='a' || a[i]<='z')
             a[i]= toupper(a[i]);
         else
             a[i]= tolower(a[i]);
         ++i;
     }
 printf("\n Your string is converted from upper to lower and lower to upper: %s\n",a);
}
