#include<stdio.h>
void main()
{
 char k;
 printf("\n The ASCII values of Uppercase Alphabets :");
 for(int k=65;k<=90;++k)
  {
   printf("\n%c = %d.",k,k);
  }
 printf("\n\n The ASCII values of Lowercase Alphabets:");
 for(k=97;k<=122;++k)
  {
   printf("\n%c = %d.",k,k); 
  }
 printf("\n\n The ASCII values of 0-9 numbers:");
 for(k=49;k<=57;++k)
  {
   printf("\n%c = %d.",k,k);
  }
 printf("\n");
}
