#include<stdio.h>
void main()
{
 char ch;
 printf("\n Enter a char");
 scanf("%c",&ch);
 if (ch=='A'||ch=='a')
{
  printf("\n A for Apple.\n");
}
 else if (ch=='B'||ch=='b')
{
  printf("\n B for Bat.\n");
}
 else if (ch=='D'||ch=='d')
{
  printf("\n D for Dog.\n");
}
 else if(ch=='F'||ch=='f')
{
  printf("\n F for Fan.\n");
}
 else
{
  printf("\n Character is not in the range.\n");
}
}
