#include<stdio.h>
#include<string.h>
int reverse_string(char[40],int,int);
int main()
{
 char a[40];
 int size;
 printf("\n Enter a string: ");
 gets(a);
 puts(a);
 size = strlen(a);
 printf("\n Size= %d",size);
 reverse_string(a,0,size-1);
 printf("\n Reversed string : ");
 puts(a);
 return 0;
}

int reverse_string(char a[40],int n, int size)
{
 //int n=0;
 char temp;
 temp=a[n];
 a[n]=a[size - n];
 a[size-n]=temp;
 if(n==size/2)
   {
     return a ;
   }
// n++;
 return reverse_string(a,++n,size);
} 
