#include<stdio.h>
int  endian(char*, int);
int main()
{
  int num=0x1234;
  endian((char*)&num, sizeof(num));
  return 0;
}
 int endian(char*var, int n)
 {
   for(int i=0;i<n;i++)
      {
 	 printf(" %.x",var[i]);
      }
  printf("\n");
 }
