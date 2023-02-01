#include<stdio.h>
#include<ctype.h>
int to_lower(char a[50]);
int main ()
{
  int i;
  char a[50];
  printf("\n Enter a string: ");
  scanf("%s",a);
  to_lower(a);
//  printf("\n Your lowered string: ", to_lower(a));
}
 int to_lower(char a[50])
 {
   int i=0;
   
   while(a[i]!='\0')
      {
	(a[i]>='A' || a[i]<='Z')? a[i]=tolower(a[i]) : a[i];
        ++i; 
      }
  printf("\n Your lowered string: %s", a);
 }
