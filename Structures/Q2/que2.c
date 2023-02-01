#include<stdio.h>
struct str 
{
 int  a;
 char b;
};
union str1
{
 int c;
 char d;
};
void main()
{
 struct str s;
 union str1 s1;
 printf("\n The size of structure is %d.",sizeof(s));
 printf("\n The size of union is %d.\n",sizeof);
}
